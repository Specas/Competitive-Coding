def addfunc(n):
    global ci
    global m
    retli=[]
    for ii in xrange(0,m):
        if ci[ii].count(n)==1:
            for jj in xrange(0,ci[ii].index(n)):
                retli.append(ci[ii][jj])
    retli2=list(set(retli))
    return retli2

def findmax(arr):
    global fin
    maxx=0
    pos=0
    if len(arr)==0:
        return -1
    for ii in xrange(0,len(arr)):
        pos=fin.index(arr[ii])
        if pos>maxx:
            maxx=pos
    return maxx
        
        
    

m=int(raw_input())
ci=[[]]*m
si=[]
for i in xrange(0,m):
    pp=int(raw_input())
    a=raw_input().split()
    
    bi=[int(x) for x in a]
    ci[i]=bi
    si=si+bi
sarr=list(set(si))
sarr.sort
fin=sarr[:]
curr=0

for i in xrange(0,len(sarr)):
    curr=sarr[i]
    
    prox=addfunc(curr)
    poss=findmax(prox)
    
    
    if poss!=-1 and poss>fin.index(curr):
        fin.pop(fin.index(curr))
        if poss==(len(sarr)-1):
            fin=fin[:poss]+[curr]
            
        elif poss==0:
            fin=[fin[0]]+[curr]+fin[1:]
            
        else:
            fin=fin[:poss]+[curr]+fin[poss:]
            
for i in xrange(0,len(fin)):
    print fin[i],
        
print ""     
    
    
        

                    
                    
                
            
                
        
            
    
    
