s=raw_input()
q=int(raw_input())
fin=[]
for i in xrange(0,q):
    li=raw_input().split()
    cha=li[0]
    chb=li[1]
    a=int(li[2])
    b=int(li[3])
    ss=s[a-1:b]
    
    pstr="chef".translate(None,cha+chb)
    sd=ss.translate(None,pstr)
    
    if sd[0]==chb:
        sd=sd[1::]
    if sd[-1]==cha:
        sd=sd[0:len(sd)-1]
    
    
    
    #calculating the substrings
    
    done=False
    st=0
    no=0
    while not done:
        try:
            st=sd.index(cha)
        except:
            done=True
        sd=sd[st+1::]
        
        if not done:
            no=no+sd.count(chb)
        
    fin.append(no)
    no=0
for i in xrange(0,q):
    print fin[i]
        
        
        
        
        
        
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    