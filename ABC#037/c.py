n, k = map(int, input().split())
list = list(map(int,input().split()))
ans = 0

for i in range(0,k-1):
    ans += list[i]*(i+1)
    ans += list[-i-1]*(i+1)

for i in range(k-1,n-k+1):
    ans += list[i]*k

print(ans)
