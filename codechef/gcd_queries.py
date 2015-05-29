#GCD of list functions
def GCD(aa,bb):
    return abs(aa) if bb==0 else GCD(bb, aa%bb)
def gcdoflist(li):
    return reduce(GCD,li)


t=int(raw_input())
fin=[]
for i in xrange(0,t):
    n,q=[int(x) for x in raw_input().split()]
    a=map(int,raw_input().split())
    for j in xrange(0,q):
        l,r=[int(y) for y in raw_input().split()]
        b=a[0:l-1]+a[r:len(a)]
        fin.append(gcdoflist(b))

for i in xrange(0,len(fin)):
    print fin[i]
        
        