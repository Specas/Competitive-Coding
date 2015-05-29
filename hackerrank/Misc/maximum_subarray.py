t=int(raw_input())
fin=[]
for i in xrange(0,t):
    n=input()
    a=map(int,raw_input().split())
    b=[]
    max_sum=0
    max_sum_non_cont=0
    allzeroes=True
    #dynamic programming algo
    for j in xrange(0,n):
        max_sum=max_sum+a[j]
        if a[j]>0:
            max_sum_non_cont+=a[j]
            allzeroes=False
        
        b.append(max_sum)
        if max_sum<0:
            max_sum=0
    #max of b gives the max contiguous sum
    if allzeroes:
        max_sum_non_cont=max(a)
    fin.append(str(max(b))+" "+str(max_sum_non_cont))
for i in xrange(0,t):
    print fin[i]
        
        
    
        
        