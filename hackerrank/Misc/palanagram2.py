s=raw_input()
l=len(s)
a=list(s)
b=[0]*26

for i in range(0,l):
    b[ord(s[i])-ord("a")]+=1
sm=0
for i in range(0,26):
    sm=sm+b[i]%2             
    
if sm>=2:
    print "NO"
else:
    print "YES"        

    
            
            
            
            
         
        
            