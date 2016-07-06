import math
n = int(input())

def prime_factorization_list(n):
    primfac = []
    d = 2
    while d*d <= n:
        if (n % d) == 0:
            primfac.append((d,int(n/d),int(n/d)-d))
        d += 1
    return primfac


# 気にするものは縦横の長さの差 + 余るタイル
ret = n

for i in range (2, n): #iは使うタイル
    print(i)
    if (int(math.sqrt(i)) == math.ceil(math.sqrt(i))): #平方数である
        ret_candidate = n-i

    elif prime_factorization_list(i):  #長方形を作成できる場合
        tmp = prime_factorization_list(i)
        ret_candidate = tmp[-1][2]+n-i
    else:
        continue

    if ret_candidate < ret:
        ret = ret_candidate
        print("更新")
        print(ret)

print (ret)
