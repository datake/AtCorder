# 最少の PackDrop の個数を求めるため，基本的には上の方でPackDropを使う方がよい
# 子のノードのうち，小さい数字が機器0からそのノードの数PackDropの数になる
# http://tenka1-2016-quala.contest.atcoder.jp/submissions/822179
# 深さ優先ver

import sys
sys.setrecursionlimit(10**5)

def dfs(v):
    print("************dfs**************")
    print(v)
    print(tree[v])
    if not tree[v]:
        assert(leaf_cost[v] != -1)
        return leaf_cost[v], 0
    sum_c, min_c = 0, INF
    ret = 0
    for c in tree[v]:
        c, a = dfs(c)
        min_c = min(min_c, c)
        sum_c += c
        ret += a
    print(min_c)
    print(ret + sum_c - min_c * len(tree[v]))
    print("**************************")
    return min_c, ret + sum_c - min_c * len(tree[v])


INF = 100000
N, M = map(int, input().split())
tree = [[] for _ in range(N)]
for i in range(N-1):
    p = int(input())
    tree[p].append(i+1)
    print(tree)

leaf_cost = [-1] * N

for _ in range(M):
    b, c = map(int, input().split())
    leaf_cost[b] = c
    print(leaf_cost)

(sum(dfs(c)) for c in tree[0])
print(sum(sum(dfs(c)) for c in tree[0]))
