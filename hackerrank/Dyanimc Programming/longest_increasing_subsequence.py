n = int(raw_input())
a = []
# input array
for i in xrange(n):
	a.append(int(raw_input()))

# Simple DP solution

# dp is the array that we use for storing the subproblems
# dp[i] means the LIS ending with a[i]

# We need to give an initial value for dp[0]

dp    = [[0]]*n
dp[0] = [a[0]]

# Quadratic dp algorithm for finding the LIS O(n^2)
for i in xrange(1,n):

	# The current element

	curr_element = a[i]
	largest_val = 0
	largest_lis = []

	for j in xrange(0,i):

		# We go through all the subproblems from the index 0 to the current
		# index. If we find that a[j] < a[i], then the solution of the subproblem
		# At the particular position is of interest. We find the maximum of all
		# the subproblem solutions satisfying the above condition (lengthwise)

		check_element = a[j]

		if check_element < curr_element:

			# continue with algo
			if len(dp[j]) > largest_val:

				largest_val = len(dp[j])
				largest_lis = dp[j]

	dp[i] = largest_lis + [curr_element]

length_lis = max([len(x) for x in dp])
print length_lis






