n=input()
li=[]
for i in xrange(0,n):
    k=input()
    a=[int(x) for x in raw_input().split()]
    for j in a:
        li.append(j)
lis=list(set(li))
lis.sort()
print " ".join(map(str,lis))

    