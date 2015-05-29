t=int(raw_input())
fin=[""]*t
for i in xrange(0,t):
    s=raw_input()
    c=[0]*26
    for ch in s:
        c[ord(ch)-ord("a")]+=1
    cn=0
    for j in range(0,26):
        if c[j]%2!=0:
            cn+=1
    if cn>2:
        fin[i]="NO"
    else:
        fin[i]="NO"
        for j in range(0,26):
            if c[j]%2!=0:
                val=chr(j+97)
                
                pos=s.find(val)
                temps=s[:pos]+s[(pos+1):]
                if temps==temps[::-1]:
                    fin[i]="YES"
                    
                
        
        

    
for i in xrange(0,t):
    print fin[i]
    
    