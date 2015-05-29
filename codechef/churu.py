def sumofinterval(aa,bb,la):
    sm=0
    for ii in range((aa-1),bb):
        sm=sm+la[ii]
    return sm
n=int(raw_input())
arr=[int(x) for x in raw_input().split()]
brr=[0]*n
crr=[]
fin=[]
tmpry=0
for i in xrange(0,n):
    a,b=[int(x) for x in raw_input().split()]
    crr.append([a,b])
 
#finding function sums initially
for i in xrange(0,n):
    brr[i]=sumofinterval(crr[i][0],crr[i][1],arr)
 
q=int(raw_input())
for i in range(0,q):
    smm=0
    aar=[]
    k,xx,yy=[int(x) for x in raw_input().split()]
    if k==1:
        tmpry=arr[xx-1]
        arr[xx-1]=yy

    else:
        for j in xrange(xx-1,yy):
            aar=aar+arr[crr[j][0]-1:crr[j][1]]
            
        fin.append(sum(aar))
        
for i in range(0,len(fin)):
    print fin[i]
    
    
    
    
    