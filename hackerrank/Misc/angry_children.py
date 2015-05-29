n=int(raw_input())
k=int(raw_input())
numlist=[]
minlist=[]
for i in xrange(0,n):
    numlist.append(int(raw_input()))
    
# we first sort the array
numlist.sort()

#for the unfairness to be minimum we need to select a continuous batch of k integers
#if it is not continuous, the difference between the maximum and the minimum terms would be greater 
#and the least unfairness would not be obtained
    
#taking a loop to find the difference between the ith and i-kth terms
#then finding the minimum of all these difference terms
    
for j in xrange(k-1,n):
    minlist.append(numlist[j]-numlist[j-k+1])
print min(minlist)
        


    