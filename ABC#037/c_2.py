n, k = map(int, input().split())
list = list(map(int,input().split()))
ans = 0
sum = 0

# leftからrightまで毎回和を求めるのではなく差分をとる
for i in range(0,n-k+1):
    if i == 0:
        for j in range(0,k):
            sum += list[j]
        ans += sum
    else:
        # 初回以降は右端を足して左端を引く
        sum += list[i+k-1]
        sum -= list[i-1]
        ans += sum

print(ans)
