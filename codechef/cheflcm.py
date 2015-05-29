def prime_factors(n):
    #returns a list of all the prime factors
    factors = []
    d = 2
    while n > 1:
        while n % d == 0:
            factors.append(d)
            n /= d
        d = d + 1

    return factors
    
    
#using the formula to find the sum of all divisors of a number
#look up sum of divisors of a number
#the formula uses the powers of the prime factors of the number

t = int(raw_input())
fin=""
for i in xrange(t):
    n = int(raw_input())
    factors_list = prime_factors(n)
    sum_of_div = 1 #stores the sum of all the factors
    
    while(len(factors_list)!=0): #till its not an empty list 
        key = factors_list[0] #first element
        freq = factors_list.count(key) #counting the number of occurrences of the element
        sum_of_div = sum_of_div * (((key**(freq+1))-1)/(key-1))
        
        #removing that element from the list
        factors_list = filter(lambda a: a!=key,factors_list)
        
    fin = fin + str(sum_of_div) + "\n"
    sum_of_div =0
    
print fin
    