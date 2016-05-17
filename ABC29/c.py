def recur(n,string):
    if n==1:
        print(string)
    else:
        recur(n-1, string+"a")
        recur(n-1, string+"b")
        recur(n-1, string+"c")

n = int(input())
recur(n+1,"")
