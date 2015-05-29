t=int(raw_input())
fin=[0]*t
for i in xrange(0,t):
    ns=raw_input()
    num=int(ns)
    bin_string=bin(num)[2::]
    full_string=bin_string.zfill(32)
    flipped_string=full_string.replace("1","2").replace("0","1").replace("2","0")
    fin[i]=int(flipped_string,2)
for i in xrange(0,t):
    print fin[i]
    