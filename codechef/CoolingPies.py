t=int(raw_input())
c=[]
r=[]

fin=[]
for i in range(0,t):
    cc=[]
    rr=[]
    n=int(raw_input())
    c=raw_input().split()
    r=raw_input().split()
    for j in range(0,n):
        cc.append(int(c[j]))
        rr.append(int(r[j]))
    cc.sort()
    rr.sort()
    
    count=0
    for j in range(0,n):
        for k in range(0,n):
            if rr[k]>=cc[j]:
                count+=1
                rr[k]=0
                
                break
    fin.append(count)

for i in range(0,t):
    print fin[i]
    
            
                
                
                
    
     