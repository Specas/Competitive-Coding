#function to find OR of the two binary strings
def funcor(sa,sb):
    retstr=""
    for ii in xrange(0,len(sa)):
        if sa[ii]=="1" or sb[ii]=="1":
            retstr=retstr+"1"
        else:
            retstr=retstr+"0"
    return retstr
            
n,m=[int(x) for x in raw_input().split()]
tlist=[]
for i in xrange(0,n):
    tlist.append(raw_input())
#finding OR of the combination of topic strings
#storing the number of 1's in each ORd string in another list
#maximum of this list gives the maximum number of topics

count_topic=[]
for i in xrange(0,n):
    for j in xrange(i+1,n):
        lista=[x for x, e in enumerate(tlist[i]) if e!="0"]
        listb=[x for x,e in enumerate(tlist[j]) if e!="0"]
        count_topic.append(len(list(set(lista)|set(listb))))
        
        
        
       
max_topics=max(count_topic)
number_of_teams=count_topic.count(max_topics)
print max_topics
print number_of_teams
        

    

        
        
        
        
        
        
        
        
        
        
        
        
        
