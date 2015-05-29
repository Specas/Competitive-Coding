s=raw_input()
n=int(s.split()[0])
t=int(s.split()[1])
a=raw_input().split()
fin=[]
for i in range(0,t):
    ss=raw_input()
    start=int(ss.split()[0])
    end=int(ss.split()[1])
    subs=a[start:end+1]
    fin.append(min(subs))
for i in range(0,t):
    print fin[i]
    