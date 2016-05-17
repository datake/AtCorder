import math
def get_position(n)
    math.log10(n) + 1

def get_position(n,count): #nの位までに含まれる1の数
    if get_position(n) == 1:
        return 10
    else:
        get_position(n-1,count*10 + 10)


n_in = int(input())
# num_position = [get_position(n)]
num = get_position(n_in,0)
#
# ans = 0
# get_position(n,)
# for i in range(n):

    # if get_position(n)


# 1から9 1(一の位)
# 1から99 10(一の位) + 10(十の位) = 20
# 1から999 20 * 10(10の位以下) + 10
