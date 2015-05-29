# Number of test cases
t = int(raw_input())
for i in xrange(t):

	# Accepting N and the array
	n = int(raw_input())
	a = map(int, raw_input().split())


	# DP solution
	max_cont = []
	max_cont.append(a[0])

	# max_cont stores the sum of contiguous elements ending at that position
	# If the sum increases, then the elment is the previous sum + element at that
	# position
	# If the sum does not increase, max_cont is that element itself
	for element in xrange(1,n):

		pre_cont = max_cont[element-1]
		sum_cont = pre_cont + a[element]
		if sum_cont > a[element]:
			# update
			max_cont.append(sum_cont)
		else:
			# same element
			max_cont.append(a[element])

	# Stores value for max continuous values
	max_contiguous = max(max_cont)

	# For non contiguous max value, we sum up all non negative numbers
	non_neg = [x for x in a if x>0]

	if len(non_neg) == 0:
		max_ncontiguous = max(a)
	else:
		max_ncontiguous = sum(non_neg)

	print str(max_contiguous) + " " + str(max_ncontiguous)


