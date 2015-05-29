t=int(raw_input())

brr=[]
fin=[[]]*t

for i in range(0,t):
    n=int(raw_input())
    a=int(raw_input())
    b=int(raw_input())
    #n stones has n-1 steps
    n-=1
    #all combinations final value is appended
    fi=[]
    for j in range(0,n+1):
        fi.append(b*(n-j)+a*(j))
    brr=list(set(fi))
    brr.sort()
    fin[i]=brr
for i in range(0,t):
    arr=fin[i]
    for j in range(0,len(arr)):
        print arr[j],
    print ""