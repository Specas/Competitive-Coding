t=int(raw_input())
fin=[]
for i in range(0,t):
    k=int(raw_input())
    if(k%2==0):
        fin.append((k*k)/4)
    else:
        fin.append((k/2)*(k/2+1))
for i in range(0,t):
    print fin[i]