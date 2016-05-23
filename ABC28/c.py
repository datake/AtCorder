a, b, c, d, e= map(int, input().split())

# 一番大きいものは e+d+c
# d+c+b か e+c+b か e+d+bのうち2番目に大きいもの

x = e+d+a
y = e+c+b
z = e+d+b

list = [x, y, z]
list.sort()
print(list[1])
