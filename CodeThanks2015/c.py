n = int(input())
h = list(map(int, input().split()))
x = int(input())
ans = 1
for i in h:
    if i < x:
        ans += 1
print(ans)
