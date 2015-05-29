t=int(raw_input())
s=[]
fin=[]
lc=0
for i in range(0,t):
    s=raw_input().split()
    a=int(s[0])
    b=int(s[1])
    count4,count7=0,0
    coun=0
    
    if b<4444:
        fin.append(0)
        continue
    for j in xrange(a,b+1):
        if j<4444:
            continue
        count4=str(j).count("4",0,len(str(j)))
        count7=str(j).count("7",0,len(str(j)))
        coun=count4+count7
        if (coun==4) or (coun==7):
            lc+=1
    fin.append(lc)
    lc=0
    
for i in range(0,t):
    print fin[i]%1000000007
        
    
    