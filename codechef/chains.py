t=int(raw_input())
fin=[]
for i in xrange(0,t):
    s=raw_input()
    #assuming the first char is - and finding characters to be replaced
    index=-1
    replace1=0
    replace2=0
    for ch in s:
        if index==-1:
            if ch=="+":
                replace1+=1
            else:
                pass
        else:
            if ch=="-":
                replace1+=1
        index*=(-1)
    index=-1
    #for first char +
    for ch in s:
        if index==-1:
            if ch=="-":
                replace2+=1
            else:
                pass
        else:
            if ch=="+":
                replace2+=1
        index*=(-1)
    fin.append(min(replace1,replace2))
for i in xrange(0,t):
    print fin[i]
    
                
        
        
        