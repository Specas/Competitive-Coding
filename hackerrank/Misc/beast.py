t=int(raw_input())
fin=[""]*t
for i in range(0,t):
    n=int(raw_input())
    # -1 if n<3
    if n<3:
        fin[i]="-1"
    else:
        #finding largest multiple of 3
        k=0
        p=0
        while ((k+1)*3)<=n:
            k+=1
            p=k
        while p>=0:
            if (n-(p*3))%5==0:
                fin[i]="5"*(p*3)+"3"*(n-(p*3))
                break
            else:
                p-=1
        if p<0:
            fin[i]="-1"
for i in range(0,t):
    print fin[i]
            
        
    