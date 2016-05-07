n, q = map(int, input().split())
list = [0]*n
for i in range(q):
    l, r, t = map(int, input().split())
    for j in range(l-1, r):
        list[j] = t

for i in list:
    print(i)
