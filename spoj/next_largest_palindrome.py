#function that finds the palindrom by string manipulations
def palstring(no_list,no_str):
    length=len(no_list)
    check_str=""
    half_str=no_str[0:length/2]
    if len(no_list)%2==0:
        check_str=half_str+half_str[::-1]
    else:
        check_str=half_str+no_str[length/2]+half_str[::-1]
    return check_str
    
t=int(raw_input())
fin=[]
for i in xrange(0,t):
    #storing the input as a number, string and list
    num_str=raw_input()
    num_list=list(num_str)
    num=int(num_str)
    num_len=len(num_list)
    pal_str=palstring(num_list,num_str)
    pal_no=int(pal_str)
    flag=0
    #if the calculated palindrom is greater than the number, it is the next palindrome
    if num_len==1:
        if num!=9:
            fin.append(num+1)
            flag=1
        else:
            fin.append(11)
            flag=1
    
    elif pal_no>num and flag!=1:
        fin.append(pal_no)
        
        
    #else we need to add 1 to the next digit and calculate palindrome again
    else:
        mult=num_len-2
        if mult==0:
            mult+=1
        new_num=num+(10**mult)
        
        pal2_no=palstring(list(str(new_num)),str(new_num))
        fin.append(int(pal2_no))

for i in xrange(0,t):
    print fin[i]
        
    
        
        
    
        
        
            
        
        