n, k = map(int, input().split())
list = list(map(int,input().split()))
ans = 0

# 累積和をとる
sum = [0]
for i in range(0, n):
    sum.append(list[i] + sum[i])

#list[l]からlist[l+k]までの和はsum[l+k] - sum[l-1]
for l in range(0, n-k+1):
    ans += sum[l+k] - sum[l]

print(ans)

# 参考
# http://paiza.hatenablog.com/entry/2015/01/21/%E3%80%90%E7%B4%AF%E7%A9%8D%E5%92%8C%E3%80%81%E3%81%97%E3%82%83%E3%81%8F%E3%81%A8%E3%82%8A%E6%B3%95%E3%80%91%E5%88%9D%E7%B4%9A%E8%80%85%E3%81%A7%E3%82%82%E8%A7%A3%E3%82%8B%E3%82%A2%E3%83%AB%E3%82%B4
# http://abc037.contest.atcoder.jp/submissions/722134
# http://abc037.contest.atcoder.jp/submissions/722261
