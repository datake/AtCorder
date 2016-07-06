import math
n = int(input())

#「abs(縦-横) + 余るタイル」だけ考えて
# h*nがnを超えない範囲で繰り返す
ans = n

for width in range (1, n):
    height = n//width
    remain = n - height * width
    ans_candidate = abs(width - height) + remain
    ans = min(ans_candidate,ans)

print (ans)
# 一つテストケース通らない．辛い
