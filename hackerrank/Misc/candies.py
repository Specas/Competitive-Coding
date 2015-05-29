n=int(raw_input())
k=int(raw_input())
a=[0]*n
for i in xrange(0,n):
    a[i]=int(raw_input())
a.sort()
ans=a[k-1]-a[0]
print ans    
        

    