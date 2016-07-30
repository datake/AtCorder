# 最少の PackDrop の個数を求めるため，基本的には上の方でPackDropを使う方がよい
# 子のノードのうち，小さい数字が機器0からそのノードの数PackDropの数になる
# http://tenka1-2016-quala.contest.atcoder.jp/submissions/822229
# 再帰ver

import sys
import sys
sys.setrecursionlimit(1000000)

N, M = map(int, input().split())
tree = [[] for _ in range(N)]
for i in range(N-1):
    P = int(input())
    tree[P].append(i+1)

C = {}
for i in range(M):
    b, c = map(int, input().split())
    C[b] = c


def rec(v):
    if len(tree[v]) == 0:
        return 0
    res = 0
    for u in tree[v]:
        res += rec(u)

    child_cost = [C[u] for u in tree[v]]
    if v == 0:
        return res + sum(child_cost)
    min_child_cost = min(child_cost)
    C[v] = min_child_cost
    for c in child_cost:
        res += c - min_child_cost

    return res

print(rec(0))
