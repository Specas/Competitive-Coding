
t=int(raw_input())
count=0
fin=[0]*t
for i in range(0,t):
    a,b=[int(x) for x in raw_input().split()]
    #generating Squares
    sq=[]
    k=0
    while ((k+1)*(k+1))<=b:
        k+=1
        sq.append(k*k)
        
    for j in xrange(0,len(sq)):
        if sq[j]>=a and sq[j]<=b:
            count+=1
    fin[i]=count
    count=0
for i in range(0,t):
    print fin[i]