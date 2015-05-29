t=int(raw_input())
fin=[""]*t
for i in xrange(0,t):
    arr=[0]*26
    brr=[0]*26
    a=raw_input()
    b=raw_input()
    a.lower()
    b.lower()
    for j in xrange(0,len(a)):
        arr[ord(a[j])-97]+=1
    for j in xrange(0,len(b)):
        brr[ord(b[j])-97]+=1
    sub=False
    for j in range(0,26):
        if arr[j]>0 and brr[j]>0:
            sub=True
            fin[i]="YES"
            break
    if sub==False:
        fin[i]="NO"
for i in xrange(0,t):
    print fin[i]
        
        
        
    