t=int(raw_input())
fin=[""]*t
for i in xrange(0,t):
    s=raw_input()
    new=""
    flag=0
    for j in xrange(0,len(s)):
        new=s[0:j]+s[(j+1):len(s)]
        
        if new==new[::-1]:
            fin[i]="YES"
            flag=1
            break
    if flag==0:
        fin[i]="NO"
for i in xrange(0,t):
    print fin[i]
        