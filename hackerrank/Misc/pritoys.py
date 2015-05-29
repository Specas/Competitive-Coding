n=int(raw_input())
a=[int(x) for x in raw_input().split()]
a.sort()
#current variable "a"
curr=a[0]
cn=0
i=0
while True:
    b=range(curr,curr+5)
    while a[i]<=b[4]:
        i+=1
        if i>(n-1):
            break
    if i<n:
        curr=a[i]
    
    cn+=1
    
    if i>(n-1):
        break
        
print cn

        
        
        
    
    