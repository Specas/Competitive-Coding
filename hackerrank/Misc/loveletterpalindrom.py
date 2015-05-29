t=int(raw_input())
p=0
fin=[]
for i in range(0,t):
    s=raw_input()
    for j in range(0,len(s)/2):
            p=p+abs(ord(s[j:j+1])-ord(s[len(s)-j-1:len(s)-j]))
    fin.append(p)
    p=0
for i in range(0,t):
    print fin[i]
            