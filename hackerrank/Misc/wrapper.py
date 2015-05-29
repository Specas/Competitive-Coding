t=int(raw_input())
sumd=0
wr=0
nt=0
fin=[]
for i in range(0,t):
    n,c,m=[int(x) for x in raw_input().split()]
    sumd=n/c
    wr=sumd
    nt=sumd
    while nt!=0:
        nt=wr/m
        sumd=sumd+nt
        wr=nt+wr%m
    fin.append(sumd)
    sumd=0
for i in range(0,t):
    print fin[i]      
    
    
    
