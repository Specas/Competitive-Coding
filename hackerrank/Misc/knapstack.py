t=int(raw_input())
fin=[]
for i in xrange(0,t):
    n,k=[int(x) for x in raw_input().split()]
    a=[int(x) for x in raw_input().split()]
    a.sort()
    diff=k
    summ=0
    curr=0
    a=[x for x in a if x<=k]
    
    for j in xrange(0,len(a)):
        for k in xrange(j,len(a)):
            
            summ=sum(a[j:k+1])
            print (summ-k)
            if k-summ>0 and k-summ<diff:
                
                diff=k-summ
    fin.append(k-diff)
for i in xrange(0,t):
    print fin[i]
        
        