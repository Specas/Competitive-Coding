n=input()
t=[]
f=[]
check=[]
for i in xrange(0,n):
    s=raw_input().split()

    t.append(int(s[0]))
    f.append(int(s[1]))
    
    check.append(1)
done=False

k=0
cf=ct=0
mis=0
while not done:
    cf=f[k]
    tf=t[k]
    mis+=1
    for j in xrange(0,len(t)):
        if check[j]==1:
            if f[j]==cf or tf+(f[j]-cf)<=t[j]:
                check[j]=0
            else:
                k=j
    if check.count(0)==len(t):
        done=True
print mis
    
            
            
            
    
    
    