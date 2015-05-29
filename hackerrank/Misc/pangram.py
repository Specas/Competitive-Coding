s=raw_input()
arr=[0]*26
s=s.lower()
for letter in s:
    if letter!=" ":
        arr[ord(letter)-ord("a")]+=1
if arr.count(0)==0:
    print "pangram"
else:
    print "not pangram"