t=int(raw_input())
fin=[]
for i in xrange(0,t):
    n=int(raw_input())
    noz=0
    curr=1
    for j in xrange(2,n+1):
        jj=j%10
        if jj==0:
            noz+=1
            
        elif (curr==5 and jj%2==0) or (curr%2==0 and jj==5):
            noz+=1
        else:
            pass
        
        if jj!=0:
            if (curr*jj)%10==0:
                curr=(curr*jj)/10
            else:
                curr=(curr*jj)%10
            
    
        
    fin.append(noz)
for i in xrange(0,t):
    print fin[i]
        
        