t=int(raw_input())
fin=[]
for i in xrange(0,t):
    num_str=raw_input()
    num_list=list(num_str)
    le=len(num_list)
    #case when the number is all 9's
    
    if num_list.count("9")==le:
        fin.append(10**le+1)
    else:
        #dividing the list into two parts, the left and the right
        ev=0
        num_left=num_list[0:le/2]
        middleTerm=""
        if le%2==0:
            num_right=num_list[le/2::]
            ev=1
        else:
            num_right=num_list[(le/2)+1::]
            middleTerm=num_list[le/2]
    
    # taking two pointers that first points to the middle numbers first
    # and then moves outwards
    # if the right number is more, left++
    # if left number is more, right++
    # if its a palindrom, then increment and duplicate
    
        ler=lef=len(num_left)
    #a points to the last element of left and b points to the last element of right
        a=ler-1
        b=0
        flag=1
        ispal=0
        while(flag):
            if num_left[a]==num_right[b]:
                a-=1
                b+=1
                if a==-1 and b==ler:
                    flag=0
                    ispal=1
            elif int(num_left[a])>int(num_right[b]):
                flag=0
            else:
                if ev==1:
                    num_left=list(str(int("".join(num_left))+1))
                    flag=0
                else:
                    num_left=list(str(int("".join(num_left)+middleTerm)+1))
                    flag=0
                    
    
    
        
        if ispal==0:
            if ev==1:
                num_fin=num_left+list(middleTerm)+num_left[::-1]
                fin.append("".join(num_fin))
            else:
                new_left=list(str(int("".join(num_left)+middleTerm)+1))
                new_right=new_left[::-1][1::]
                num_fin=new_left+new_right
                fin.append("".join(num_fin))
        else:
            if ev==1:
                num_fin=num_left+list(middleTerm)+num_left[::-1]
                fin.append("".join(num_fin))
            else:
                num_fin=num_left+num_left[::-1][1::]
                fin.append("".join(num_fin))
                
                
    
print fin
        
        
        
            
        
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
