n,k=[int(x) for x in raw_input().split()]
a=map(int,raw_input().split())
done=False
times=0
b=[]
p=0
while not done:
    pos=a.index(max(a))
    if pos==0:
        pass
    else:
        times+=1
    if times>k:
        break
    b.append(max(a))
    if pos!=0:
        a[pos]=a[times-1]
    p+=1
    a=a[p::]
if times<=k:
    b.append(a)
print b
    
    
    