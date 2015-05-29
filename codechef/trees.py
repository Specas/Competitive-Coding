t=int(raw_input())
fin=[0]*t
for i in xrange(0,t):
    n=int(raw_input())
    a=map(int,raw_input().split())
    b=list(set(a))
    fin[i]=len(b)
for i in xrange(0,t):
    print fin[i]
    
    
    