n=input()
x=[]
y=[]
for i in xrange(0,n):
    s=raw_input().split()
    x.append(int(s[0]))
    y.append(int(s[1]))
q=input()
for i in xrange(0,q):
    s=raw_input().split()
    ch=s[0]
    a=int(s[1])
    b=int(s[2])
    aa=bb=cc=dd=0
    if ch=="C":
        for j in xrange(a-1,b):
            if x[j]>0 and y[j]>0:
                aa+=1
            if x[j]>0 and y[j]<0:
                dd+=1
            if x[j]<0 and y[j]>0:
                bb+=1
            if x[j]<0 and y[j]<0:
                cc+=1
        print str(aa)+" "+str(bb)+" "+str(cc)+" "+str(dd)
    elif ch=="X":
        for j in xrange(a-1,b):
            y[j]=y[j]*(-1)
    elif ch=="Y":
        for j in xrange(a-1,b):
            x[j]=x[j]*(-1)
        
        
    

    
    