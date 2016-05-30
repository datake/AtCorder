
c = [[0 for i in range(4)] for j in range(4)]
for i in range(4):
	c[i]=((input().split()))

for i in range(3, -1, -1):
    print(c[i][3], c[i][2], c[i][1], c[i][0])
