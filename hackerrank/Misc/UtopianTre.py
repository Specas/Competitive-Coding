

fin=[]
def tree(no,nn,a):
    if a==nn:
        fin.append(no)
        return ""
    else:
        if a%2!=0:
            no=no+1
        else:
            no=no*2
    a+=1
    tree(no,nn,a)


t=int(raw_input())
for i in range(0,t):
    n=int(raw_input())
    tree(1,n,0)
for i in range(0,t):
    print fin[i]
    
    
    