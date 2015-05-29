def funct(n):
    global s
    b=""
    ch=chr(n+97)
    for k in xrange(0,len(s)):
        if s[k]==ch:
            b=s[0:k]+s[k+1:len(s)]
            if b==b[::-1]:
                return k
    return -1

t=int(raw_input())
fin=[0]*t
for i in xrange(0,t):
    s=raw_input()
    if s==s[::-1]:
        fin[i]=-1
        continue
    arr=[0]*26
    for letter in s:
        if letter!=" ":
            arr[ord(letter)-ord("a")]+=1
    for j in xrange(0,26):
        if arr[j]%2!=0:
            r=funct(j)
            if r==-1:
                continue
            else:
                fin[i]=r
for i in xrange(0,t):
    print fin[i]
        
            
    
        
