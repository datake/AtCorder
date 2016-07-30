n,m = map(int, input().split())
p = [0 for i in range(n-1)]
b = [0 for i in range(m)]
c = [0 for i in range(m)]

for i in range(n-1):
	p[i]=int(input())
print(p)

for i in range(m):
	b[i], c[i]=map(int, input().split())

# 上記は自分で実装しようと思ってできなかった段階
# http://tenka1-2016-quala.contest.atcoder.jp/submissions/822179
# http://tenka1-2016-quala.contest.atcoder.jp/submissions/822179
