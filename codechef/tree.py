def genfinder(n):
    k=1
    init=0
    while True:
        init=(2**k)-1
        if n<=init:
            break
        k+=1
    return k
#function to find path length between two nodes in the same generation
def pathlength(a,b):
    cntr=0
    while a!=b:
        a=a/2
        b=b/2
        cntr+=1
    return cntr

t=int(raw_input())
st=1
residue=0
tlen=0
fin=[]
patha=0
pathb=0
for i in range(0,t):
    s=raw_input()
    #for qi case
    s=s+" 0"+" 0"
    a=s.split()
    ss=a[0]
    x=int(a[1])
    y=int(a[2])
    if x==0 and y==0 and ss=="Qi":
        st=st*(-1)
    else:
        #finding generation of both the nodes
        
        arr=[x,y]
        xx=max(arr)
        yy=min(arr)
        gena=genfinder(xx)
        genb=genfinder(yy)
        patha=abs(gena-genb)
        if patha!=0:
            for j in range(0,patha):
                xx=xx/2
        pathb=pathlength(xx,yy)
        #finding total length
        tlen=patha+((2*pathb)+1)
        if ss=="Qb":
            if st==1:
                if tlen%2==0:
                    fin.append(tlen/2)
                else:
                    if genb%2==0:
                        fin.append(tlen/2)
                    else:
                        fin.append((tlen/2)+1)
            else:
                if tlen%2==0:
                    fin.append(tlen/2)
                else:
                    if genb%2==0:
                        fin.append((tlen/2)+1)
                    else:
                        fin.append(tlen/2)
        else:
            if st==1:
                if tlen%2==0:
                    fin.append(tlen/2)
                else:
                    if genb%2==0:
                        fin.append((tlen/2)+1)
                    else:
                        fin.append(tlen/2)
            else:
                if tlen%2==0:
                    fin.append(tlen/2)
                else:
                    if genb%2==0:
                        fin.append(tlen/2)
                    else:
                        fin.append((tlen/2)+1)
for i in range(0,len(fin)):
    print fin[i]
            
                
                    
                    
            
        
        
        
        
        
    
    
    