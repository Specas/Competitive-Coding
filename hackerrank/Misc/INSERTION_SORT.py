def insertion_sort(li):
    for i in xrange(1, len(li)):
        j = i-1 
        key = li[i]
        while (li[j] > key) and (j >= 0):
            li[j+1] = li[j]
            j -= 1
        li[j+1] = key


m = input()
ar = [int(i) for i in raw_input().strip().split()]
insertion_sort(ar)
print " ".join(map(str,ar))