a = int(input ())
b = int(input ())

if a * b > 0:
    if abs(a) > abs(b):
        print (2*abs(a))
    else:
        print (2*abs(b))
else:
    print (2*abs(a)+2*abs(b))
