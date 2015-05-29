t=int(raw_input())
fin=[]
for i in range(0,t):
    n=int(raw_input())
    if (n%2)==0:
        fin.append("ALICE")
    else:
        fin.append("BOB")
for i in range(0,t):
    print fin[i]
    
    
    