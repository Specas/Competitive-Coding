t=int(raw_input())
fin=[0]*t
for i in xrange(0,t):
    n=int(raw_input())
    li=map(int,raw_input().split())
    #creating a list of unique elements  
    liset=list(set(li))
    maxx=0
    m = max(set(li), key=li.count)
    fin[i]=n-li.count(m)
    
  
    
for i in xrange(0,t):
    print fin[i]