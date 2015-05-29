t=int(raw_input())
fin=[]
for i in range(0,t):
    n=int(raw_input())
    if (n%2)==0:
        fin.append(n)
    else:
        fin.append(n-1)
        
for i in range(0,t):
    print fin[i]
