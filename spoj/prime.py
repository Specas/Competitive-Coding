#zero filling func
def zer(aa,pp,st):
    for i in xrange(pp+st,len(aa),pp):
        aa[i]=0
    
    

#first no func
def fir(aa,pp):
    for i in xrange(pp+1,len(aa)):
        if aa[i]!=0:
            return aa[i]
    return -1

#sieve of eratosthenes func
def sieve(n):
    ar=range(2,n+1)
    return ar
    

t=int(raw_input())
fin=[[]]*t
for i in xrange(0,t):
    a,b=[int(x) for x in raw_input().split()]
    le=sieve(a)
    ri=sieve(b)
    #working on left
    pl=2 
    while pl<=(len(le)/2):
        zer(le,pl,le.index(pl))
        pl=fir(le,le.index(pl))
    #working on right
    pr=2 
    while pr<=(len(ri)/2):
        zer(ri,pr,ri.index(pr))
        pr=fir(ri,ri.index(pr))
    le[:]=[item for item in le if item!=0]
    ri[:]=[item for item in ri if item!=0]
    #print le,ri
    if len(le)==0:
        key=0
    else:
        key=le[-1]
        
    
    sub=[item for item in ri if item>=key]
    fin[i]=sub
for i in xrange(0,t):
    if len(fin[i])==0:
        print "\n"
    else:
        for j in xrange(0,len(fin[i])):
            print fin[i][j]
    print "\n"
    
        
    
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    