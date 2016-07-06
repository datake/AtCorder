# 参考にしたもの:http://stackoverflow.com/questions/16996217/prime-factorization-list
# nが与えられた場合の因数分解のリストを返す
# 素数ならば空のリストを返す
def prime_factorization_list(n):
    primfac = []
    d = 2
    while d*d <= n:
        if (n % d) == 0:
            primfac.append((d,int(n/d)))
        d += 1
    return primfac

# print(prime_factorization_list(120))
print(prime_factorization_list(23))
