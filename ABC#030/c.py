n, m = map(int, input().split())
time_a_b, time_b_a = map(int, input().split())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

now=0
is_a=1 #現在aにいれば1 bにいるなら0
ans=0

while True:
    if len(a)==0 or len(b) == 0:
        break
    if is_a == 1:
        # AからB
        if a[0] < now:
            del a[0]
        else:
            now = a[0] + time_a_b
            is_a = 0

    if is_a == 0:
        # BからA

        if b[0] < now:
            del b[0]
        else:
            now = b[0] + time_b_a
            ans+=1
            is_a = 1

print(ans)
