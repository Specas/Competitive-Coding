t=int(raw_input())
fin=[""]*t
for i in xrange(0,t):
    n=int(raw_input())
    b=map(int,raw_input().split())
    sumb=sum(b)
    delt=sumb-100
    if delt<0:
        fin[i]="NO"
    else:
        if n>delt:
            fin[i]="YES"
        else:
            fin[i]="NO"
for i in xrange(0,t):
    print fin[i]
    