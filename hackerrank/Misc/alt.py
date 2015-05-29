def check(s):
    for k in range(0,len(s)-1):
        if s[k]==s[k+1]:
            return 0
    return 1

t=int(raw_input())
fin=[0]*t
for i in xrange(0,t):
    s=raw_input()
    curr=s[0]
    count=0
    for j in xrange(1,len(s)):
        if s[j]==curr:
            count+=1
        else:
            curr=s[j]
    fin[i]=count
for i in xrange(0,t):
    print fin[i]
        
        