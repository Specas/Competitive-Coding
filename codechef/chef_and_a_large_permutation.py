t=int(raw_input())
fin=[""]*t
for i in xrange(0,t):
    n,k=[int(x) for x in raw_input().split()]
    mainlist=range(1,n+1)
    sub=map(int,raw_input().split())
    if k==0:
        fin[i]="Mom"
    elif mainlist.count(1)==0:
        fin[i]="Chef"
    elif mainlist.count(2)==0:
        fin[i]="Mom"
    
            