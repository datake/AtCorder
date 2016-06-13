import itertools
a1, a2= map(int, input().split())
b1, b2= map(int, input().split())
c = int(input ())

ans = set()
if (a1 == c or a2 == c) and (b1 == c or b2 == c):
    if a1 == c:
        ans.add(a2)
    else:
        ans.add(a1)

    if b1 == c:
        ans.add(b2)
    else:
        ans.add(b1)
    ans.add(c)

elif a1 == c or a2 == c:
    ans.add(b1)
    ans.add(b2)
elif b1 == c or b2 == c:
    ans.add(a1)
    ans.add(a2)
ans = sorted(ans)
print (len(ans))
for i in ans:
    print(i)
