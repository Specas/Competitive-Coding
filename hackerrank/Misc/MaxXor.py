l=int(raw_input())
r=int(raw_input())
a=[]
#creating list
for i in range(l,r+1):
    a.append(i)
fin=[]
for i in range(0,len(a)):
    for j in range(i,len(a)):
        fin.append(a[i]^a[j])
print max(fin)
        