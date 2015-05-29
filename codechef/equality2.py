t=int(raw_input())

for i in xrange(0,t):
    n=int(raw_input())
    li=map(int,raw_input().split())
    
    #finding 2**k <= n
    done=False
    k=0
    while not done:
        if 2**k<=n and 2**(k+1)>n:
            done=True
        else:
            k+=1
    print k
        
        
    