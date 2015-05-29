n=int(raw_input())
s=raw_input().split()
a=map(int,s)
fin=[]
p=0
while any(a):
    fin.append(len(a))
    mi=min(a)
    for i in range(0,len(a)):
            a[i]=a[i]-mi
    #removing all zeroes
    
    for j in range(0,a.count(0)):
        a.remove(0)
    
    
for i in range(0,len(fin)):
    print fin[i]
