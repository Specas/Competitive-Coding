t = int(raw_input())
for i in xrange(t):

	n,k = [int(x) for x in raw_input().split()]
	a = map(int, raw_input().split())
	# dp[i] stores the maximum value <= i that can be formed from the give
	# numbers in the list
	dp = [0]*(k+1)
	for j in xrange(1,k+1):

		for g in a:

			if g>j:
				continue
			else:
				# DP solution
				dp[j] = max(dp[j], g+dp[j-g])
				# print "dp["+ str(j-1)+"] = "+ str(dp[j-1])

	print dp[k]



