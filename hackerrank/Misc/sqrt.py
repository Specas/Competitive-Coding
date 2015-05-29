import math
t=int(raw_input())
count=0
fin=[0]*t
for i in range(0,t):
    a,b=[int(x) for x in raw_input().split()]
    for j in xrange(a,b+1):
        sq=int(math.sqrt(j))
        if (sq**2)==j:
            count+=1
    fin[i]=count
    count=0
for i in range(0,t):
    print fin[i]
    
     
    