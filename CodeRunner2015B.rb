require 'net/http'
require 'uri'
require 'json'
require 'logger'
require 'pp'
require 'complex'

enter="http://game.coderunner.jp/enter?token=5WF8YOIDL1XY8JDLYAOQHJYNYBIIXZQN"
infoJson="http://game.coderunner.jp/infoJson?token=5WF8YOIDL1XY8JDLYAOQHJYNYBIIXZQN"
historyJson="http://game.coderunner.jp/roomJson?rid=[room_id]"
#ファイル
error_log_filename="error_coderunner_b.log"
info_filename="info_coderunner_b.log"

def get_json(location, limit = 10)
  raise ArgumentError, 'too many HTTP redirects' if limit == 0
  uri = URI.parse(location)
  begin
    response = Net::HTTP.start(uri.host, uri.port, use_ssl: uri.scheme == 'https') do |http|
      http.open_timeout = 5
      http.read_timeout = 10
      http.get(uri.request_uri)
    end
    case response
    when Net::HTTPSuccess
      json = response.body
      JSON.parse(json)
    when Net::HTTPRedirection
      location = response['location']
      warn "redirected to #{location}"
      get_json(location, limit - 1)
    else
      puts [uri.to_s, response.value].join(" : ")
      # handle error
    end
  rescue => e
    puts [uri.to_s, e.class, e].join(" : ")
    # handle error
  end
end

File.open(info_filename, "w") do |infolog|
  File.open(error_log_filename, "w") do |errorlog|
    loop{
      begin
        result=get_json(infoJson)
        if (result["hp"]<result["power"])
          if(result["hp"]>30000000)
            pp get_json(enter)
            pp "atack"
            pp "atack hp:"+result["hp"].to_s
            pp "atack power:"+result["power"].to_s
          elsif (result["hps"].length<5)
            get_json(enter)
            pp "atack"
            pp "atack hp:"+result["hp"].to_s
            pp "atack power:"+result["power"].to_s
          end
          pp "not atack"
        end
        pp "debug"
        pp result
        infolog.puts result
      rescue => error
        errorlog.puts "error"
        errorlog.puts error.message
        pp get_json(enter)
        next
      end
    }
  end
end
