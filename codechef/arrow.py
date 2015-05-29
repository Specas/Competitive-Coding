
n=int(raw_input())
a=[float(x) for x in raw_input().strip().split()]
m=int(raw_input())
q=0
for i in xrange(0,m):
    b=[float(x) for x in raw_input().strip().split()]
    st=((b[0]**2)+(b[1]**2))**(0.5)
    en=((b[2]**2)+(b[3]**2))**(0.5)
    aa=0
    bb=0
    for j in xrange(0,n):
        if a[j]>st:
            aa=int(a[j])
            break
    ll=(((b[0]-b[2])**2)+(((b[1]-b[3])**2)**0.5)
    q=q+(bb-aa)+1
print q
    