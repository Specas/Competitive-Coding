n=int(raw_input())
a=[int(x) for x in raw_input().split()]
#finding constant term b in ax+b>0
curr=a[0]*(-1)
nxt=0
for i in xrange(1,n):
    curr=curr+nxt
    nxt=curr-a[i]
   
#final iteration
curr=curr+nxt
exp=2**n
curr=curr*(-1)
ans=0
if curr%exp==0:
    ans=curr/exp
else:
    ans=(curr/exp)+1
print ans
    

    
