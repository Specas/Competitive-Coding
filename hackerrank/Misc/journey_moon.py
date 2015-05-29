n,k=[int(x) for x in raw_input().split()]
for i in xrange(0,k):
    s=raw_input()
diff=n-(2*k)
tot=(2*k)+((diff)*(diff-1))/2+2*k*diff
print tot