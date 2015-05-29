sfin=[]
while True:
    n=int(raw_input())
    if n==0:
        break
    s=raw_input()
    sa=s.split()
    sai=[]
    fin=[]
    k=0
    for i in range(0,n):
        sai.append(int(sa[i]))
    for i in range(1,n+1):
        fin.append(sai.index(i)+1)
    
    if fin==sai:
        sfin.append("ambiguous")
    else:
        sfin.append("not ambiguous")
        
for i in range(0,len(sfin)):
    print sfin[i]


        

        
