t=int(raw_input())
fib=[0,1]
p=1
num=1
fin=[]
for i in xrange(0,t):
    n=int(raw_input())
    while num<=n:
        num=fib[p]+fib[p-1]
        fib.append(num)
        p+=1
    if fib.count(n)>0:
        fin.append("IsFibo")
    else:
        fin.append("IsNotFibo")
for i in xrange(0,t):
    print fin[i]
    