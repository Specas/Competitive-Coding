t=int(raw_input())
fin=[]
for i in xrange(0,t):
    a=map(int,raw_input().split())
    x=a[0]
    y=a[1]
    k=a[2]
    n=a[3]
    cost=[]
    pages=[]
    for j in xrange(n):
        s=raw_input().split()
        pages.append(int(s[0]))
        cost.append(int(s[1]))
        
    #number of pages required
    req_pages=x-y
    # default is set to fault. Such a selection is not possible
    possible=False
    for j in xrange(n):
        if pages[j]>=req_pages and cost[j]<=k:
            possible=True
    if possible:
        fin.append("LuckyChef")
    else:
        fin.append("UnluckyChef")
print "\n".join(fin)
        
        
        
        
