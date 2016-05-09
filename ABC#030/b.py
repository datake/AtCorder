a, b = map(int, input().split())
short=(a%12)*30+b*0.5
long=b*6
# print(short)
# print(long)
if abs(long - short) > 180:
    print(360-abs(long - short))
else:
    print(abs(long - short))
