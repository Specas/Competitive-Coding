n = int(raw_input())
a = []
# input array
for i in xrange(n):
	a.append(int(raw_input()))

# Simple DP solution
dp = [0]*n
# Initial condition
dp[0] = 1

for i in xrange(1,n):

	# If the ith element is greater than the previous, increment dp at that
	# position, else keep it as the same as the value in the previous position

	if a[i]>a[i-1]:
		dp[i] = 1 + dp[i-1]
	else:
		dp[i] = dp[i-1]

# Max value of dp gives the LIS
print max(dp)


