t=int(raw_input())
fin=[0]*t
for i in xrange(0,t):
    s=raw_input()
    n=int(s)
    a=map(int,list(set(list(str(n)))))
    b=[]
    for j in a:
        if j==0:
            b.append(0)
        else:
            if n%j==0:
                b.append(1) 
            else:
                b.append(0)
     
    count=0
    k=0
    for j in a:
        count=count+b[k]*s.count(str(j))
        k+=1
    fin[i]=count
    count=0
for i in xrange(0,t):
    print fin[i]
        
    