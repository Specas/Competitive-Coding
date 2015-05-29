t=int(raw_input())
fin=[0]*t
alphafreq=[0]*26
for i in xrange(0,t):
    s=list(raw_input())
    #storing frequency
    for j in xrange(0,26):
        alphafreq[j]=s.count(chr(97+j))
    initvalue=alphafreq.count(2)
    #forbidden values
    forbid=[]
    for j in xrange(0,len(s)):
        if alphafreq[ord(s[j])-97]<=1:
            forbid.append(j)
    #all substrings brute force
    for j in xrange(2,len(s)+1):
        
        
    