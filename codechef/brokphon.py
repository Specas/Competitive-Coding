#test cases
t = int(raw_input())
fin=""
for i in xrange(t):
    n = int(raw_input())
    a = map(int,raw_input().split())
    count=0
    #a is the list of numbers
    #going through the elements from the 2nd element till the end
    #if for an element, the numbers on the left and right are different, then that person has 
    #heard it wrong or relayed the wrong information 
    for k in xrange(0,len(a)):
        #There is a different condition if the element is the last or first element
        
        if k!=(len(a)-1) and k!=0:#for all elements except the first and the
            
        
            if a[k]!=a[k+1] or a[k]!=a[k-1]:
                count+=1
        elif k==(len(a)-1):
            
            #this means that the element is the last element
            if a[k]!=a[k-1]:#k+1 condition here gives error
                count+=1
        elif k==0:#for first element
            if a[k]!=a[k+1]:
                count+=1
        
    
    fin = fin + str(count) + "\n"
print fin

        