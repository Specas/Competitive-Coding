t=int(raw_input())
for i in xrange(0,t):
    s=map(int,raw_input().split())
    n=s[0]
    k=s[1]
    q=s[2]
    ss=raw_input()
    for j in xrange(q):
        a,b=[int(x) for x in raw_input().split()]
        count=0
        for jj in xrange(a-1,b):
            for kk in xrange(jj,b):
                st=ss[jj:kk+1]
                if st.count("0")>k or st.count("1")>k:
                    pass
                else:
                    count+=1
        print count
        count=0
            
    