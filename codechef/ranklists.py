import math
def summ(num):
    ns=(num*(num+1))/2
    return ns
t=int(raw_input())
fin=[0]*t
for i in xrange(0,t):
    n,s=[int(x) for x in raw_input().split()]
    
    #finding n according to sum
    
    nn=int(math.floor(math.sqrt(2*s)))
    
    change=0
    #computing proper value
    inf=True
    if s==summ(nn) and n==nn:
        inf=False
    while inf:
        sm=summ(nn)
        if (s-sm)>=(n-nn):
            change=n-nn
            inf=False
        else:
            nn-=1
    fin[i]=change
    change=0
for i in xrange(0,t):
    print fin[i]
    
            
            
        
        
        
        
    