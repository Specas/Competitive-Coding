p=raw_input()
c=[]
h=[]
e=[]
f=[]
for i in xrange(0,len(p)):
    if p[i]=="c":
        c.append(i+1)

    elif p[i]=="h":
        h.append(i+1)

    elif p[i]=="e":
        e.append(i+1)

    elif p[i]=="f":
        f.append(i+1)

    else:
        pass
q=int(raw_input())
fin=[0]*q
for i in xrange(0,q):
    inputlist=raw_input().split()
    a=inputlist[0]
    b=inputlist[1]
    l=int(inputlist[2])
    r=int(inputlist[3])
    lista=[]
    listb=[]
    if a=="c":
        lista=list(c)
    elif a=="h":
        lista=list(h)
    elif a=="e":
        lista=list(e)
    elif a=="f":
        lista=list(f)
        
    if b=="c":
        listb=list(c)
    elif b=="h":
        listb=list(h)
    elif b=="e":
        listb=list(e)
    elif b=="f":
        listb=list(f)
    
    count=0
    for j in lista:
        if j >= l:
            for k in listb:
                if k>j and k<=r:
                    count+=1
    fin[i]=count
    count=0
for i in xrange(0,q):
    print fin[i]
                
            
    
    
    
    
        
    
