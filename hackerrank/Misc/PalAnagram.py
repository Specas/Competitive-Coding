import itertools
s=raw_input()
a = list("".join(string) for string in itertools.permutations(s))
b=list(set(a))
flag=0
for i in range(0,len(b)):
    if b[i]==b[i][::-1]:
        flag=1
        break
if flag==1:
    print "YES"
else:
    print "NO"
   
        