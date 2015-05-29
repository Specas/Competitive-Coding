t=input()
for i in xrange(0,t):
    k=input()
    li=[int(x) for x in raw_input().split()]
    p=reduce(lambda x, y: x * y, li, 1)
    print p%123456
    