#function to pop out elements till left bracket is encountered
def pop_out(stacklist,outlist):
    flag=1
    if len(outlist)==0:
        flag=0
    while flag:
        pop_element=stacklist.pop(0)
        if pop_element=="(":
            flag=0
            
        else:
            outlist.append(pop_element)
    
#function to pop out operators
def pop_operator(stacklist,outlist,key):
    flag=1
    while flag:
        if stacklist[0]=="(":
            flag=0
        elif stacklist[0]==")":
            flag=0
        
        elif prec.index(key)<=prec.index(stacklist[0]):
            outlist.append(stacklist.pop(0))
            
        else:
            flag=0
    stacklist.insert(0,key)
                        
            
        
#initializing operator precendence
prec=["+","-","*","/","^"]        
        
        
   
t=int(raw_input())
fin=[]
for i in xrange(0,t):
    s=list(raw_input())
    #s stores the input Expression
    
    #initializing the stack list and the output list
    stack_list=[]
    output_list=[]
    

    
    #going through the expression and working with the Stack
    
    for j in xrange(0,len(s)):
        #if the literal is a left bracket
        if s[j]=="(":
            #pushing in to the stack
            stack_list.insert(0,"(")
            
        elif s[j].isalpha():
            #appending to output list
            output_list.append(s[j])
            
        elif s[j]==")":
            pop_out(stack_list,output_list)
            
        else:
            #operator
            pop_operator(stack_list,output_list,s[j])
            
    fin.append("".join(output_list))
for i in xrange(0,t):
    print fin[i]
            
        
        
        