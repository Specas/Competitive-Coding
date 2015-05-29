def find(aa):
    ans=aa[0]
    if len(aa)>1:
        for kk in xrange(1,len(aa)):
            ans=ans^aa[kk]
    else:
        return ans        
    return ans
t=int(raw_input())
fin=[0]*t
for i in xrange(0,t):
    n,nk=[int(x) for x in raw_input().split()]
    a=map(int,raw_input().split())
    maxx=nk
    tm=0
    for j in xrange(0,n):
        for k in xrange(j,n):
            num=find(a[j:k+1]) 
            tm=num^nk
            if tm>maxx:
                maxx=tm
    fin[i]=maxx
    
for i in xrange(0,t):
    print fin[i]   
    