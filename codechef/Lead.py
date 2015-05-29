n=int(raw_input())
aa=[]
bb=[]
for i in range(0,n):
    s=raw_input()
    sa=s.split(" ")
    
    aa.append(int(sa[0]))
    bb.append(int(sa[1]))
dd=[]
for i in range(0,n):
    dd.append(aa[i]-bb[i])
max1,max2=0,0
for i in range(0,n):
    if dd[i]<0:
        val=abs(dd[i])
        if val>max2:
            max2=val
    else:
        val=dd[i]
        if val>max1:
            max1=val
            
if max2>max1:
    fin="2"+" "+str(max2)
else:
    fin="1"+" "+str(max1)
print fin
print "\n"
    
    