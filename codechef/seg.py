from decimal import Decimal
i=0
n=0
st=[]
kt=[]
while n<=1000000000001:
    n=2**i
    st.append(n)
    kt.append(i)
    i+=1
t= int(raw_input())
fin=[0.0]*t
for i in xrange(0,t):
    xx,k=[int(numberr) for numberr in raw_input().split()]
    x=Decimal(xx)
    if k==1:
        fin[i]=x/2
        break
    j=0
    while st[j]<=k:
        bval=st[j]
        j+=1
    
    div=x/(bval*2)
    
    if st.count(k+1)>0:
        fin[i]=x-div
    else:
        fin[i]=(2*(k-bval)+1)*div
for i in xrange(0,t):
    print fin[i]