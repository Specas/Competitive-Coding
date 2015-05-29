
def funcn(xx,nn):
    fn=1
    for k in range(xx,nn):
        fn=fn*((k+1)**(k+1))
    return fn
t=int(raw_input())
fin=[]
for i in range(0,t):
    n,m,q=[int(x) for x in raw_input().split()]
    
   
    
    for j in range(0,q):
        r=int(raw_input())
        p=n-r
        if r>p:
            num=funcn(r,n)
            den=funcn(0,p)
        else:
            num=funcn(p,n)
            den=funcn(0,r)
        
        fin.append((num/den)%m)
            
for i in range(0,len(fin)):
    print fin[i]

        
    