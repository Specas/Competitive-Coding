n,m=[int(x) for x in raw_input().split()]
sm=0
for i in xrange(0,m):
    a,b,k=[int(x) for x in raw_input().split()]
    sm=sm+(b-a+1)*k

ans=sm/n
print ans
