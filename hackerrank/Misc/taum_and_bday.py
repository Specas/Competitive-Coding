
t=int(raw_input())
fin=[0]*t
firstbuy=0
afterconvert=0
normalbuy=0
for i in xrange(0,t):
    black,white=[int(x) for x in raw_input().split()]
    x,y,z=[int(x) for x in raw_input().split()]
    if x==y:
        fin[i]=x*(black+white)
    elif x>y:
        normalbuy=x*black+y*white
        firstbuy=y*(black+white)
        afterconvert=firstbuy+z*black
        if afterconvert<normalbuy:
            fin[i]=afterconvert
        else:
            fin[i]=normalbuy
    else:
        normalbuy=x*black+y*white
        firstbuy=x*(black+white)
        afterconvert=firstbuy+z*white
        if afterconvert<normalbuy:
            fin[i]=afterconvert
        else:
            fin[i]=normalbuy
        
        
for i in xrange(0,t):
    print fin[i]
        
    