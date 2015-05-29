n=int(raw_input())
li=map(int,raw_input().split())
def insertion_sort(a,b,ii):
    k=ii-2
    
    while b<a[k]:
        a[k+1]=a[k]
        
        k-=1
        if k<0:
            break
    a[k+1]=b
    print " ".join(map(str,a))
for i in xrange(1,len(li)):
    insertion_sort(li,li[i],i+1)
    
    