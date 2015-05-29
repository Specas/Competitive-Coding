t=int(raw_input())
fin=[0]*t
for i in xrange(0,t):
    n,k=[int(x) for x in raw_input().split()]
    a=map(int,raw_input().split())
    b=map(int,raw_input().split())
    #checking
    maxx=0
    for j in xrange(0,n):
        
        times=k/a[j]
        profit=times*b[j]
        if profit>maxx:
            maxx=profit
    fin[i]=maxx
    maxx=0
for i in xrange(0,t):
    print fin[i]