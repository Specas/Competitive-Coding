arr=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
def conv(no,b):
    tmp=no
    d=0
    st=""
    ch=' '
    while tmp!=0:
        d=tmp%b
        if d>9:
            ch=str(arr[d-10])
        else:
            ch=str(d)
        tmp=tmp/b
        st=ch+st
    return st
        






t=int(raw_input())
while t:
    t=t-1
    n=int(raw_input())
    k=2
    
    while True:
        ss=conv(n,k)
        if ss==ss[::-1]:
            print k
            break
        k+=1
    
    