t=int(raw_input())
#creating array for all the alphabets
arr=[0]*26
for i in range(0,t):
    s=raw_input()
    a=list(s)
    b=list(set(a))
    for j in range(0,len(b)):
        arr[ord(b[j])-ord("a")]+=1
    
summ=0
for i in range(0,26):
    if arr[i]>=t:
        summ+=1
print summ