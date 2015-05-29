n=input()
li=[]
for i in xrange(0,n):
    a=input()
    li.append(a)
longest_seq=[[]]*n
longest_seq[0]=[li[0]]


#dynamic programming code to find the subsequence. Complexity is O(N2)

for i in xrange(1,n):
    longest_seq[i]=[]
    for j in xrange(0,i):
        if (longest_seq[j][-1]<li[i]) and (len(longest_seq[i])<len(longest_seq[j])+1):
            
            longest_seq[i]=longest_seq[j][::]
            
    longest_seq[i].append(li[i])
        
print max(len(x) for x in longest_seq)



    