#function to find intersection repeatedly
def inter(le):
    retlist=[]
    flag=0
    le=sorted(le)
    #removing duplicates
    le=[le[i] for i in range(len(le)) if i==0 or le[i]!=le[i-1]]
    if len(le)==1:
        le.append([-1])
        return le
    for ii in xrange(0,len(le)-1):
        for jj in xrange(ii+1,len(le)):
            if len(list(set(le[ii])&set(le[jj])))!=0:
                retlist.append(list(set(le[ii])&set(le[jj])))
                flag=1
    if flag==0:
        retlist.append([-1])

        return retlist
    else:
        
        return retlist
            
        
        
        
t=int(raw_input())
for i in xrange(0,t):
    n=int(raw_input())
    meg=[[]]*n
    for j in xrange(0,n):
        start,end=[int(x) for x in raw_input().split()]
        li=range(start,end+1)
        meg[j]=li
        
    k=[-2]
    prox=meg
    while prox[len(prox)-1]!=[-1]:
        prox=inter(prox)
        print prox
        
        
    finp=prox[0:len(prox)-1]
    print finp
   
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    