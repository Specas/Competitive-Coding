t=int(raw_input())
fin=[0]*t
for i in xrange(0,t):
    s=raw_input()
    a=list(s)
    b=list(set(a))
    fin[i]=len(b)
for i in xrange(0,t):
    print fin[i]
    