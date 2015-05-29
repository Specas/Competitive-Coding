t=int(raw_input())
fin=[None]*t
p=0
for i in range(0,t):
    n=int(raw_input())
    a=[int(x) for x in raw_input().split()]
    maxi=max(a)
    b=True
    for j in range(1,maxi/2+1):
        for k in range(0,n):
            if a[k]%j!=0:
                b=False
        if b==True:
            p=j
            
            
        else:
            b=True
    if p>1:
        fin[i]="NO"
    else:
        #condition if all digits are equal and prime
        c=True
        for kk in range(1,n):
            if(a[kk]!=a[0]):
                c=False
        if c:
            fin[i]="NO"
        else:
            fin[i]="YES"
                
        
for i in range(0,t):
    print fin[i]
    