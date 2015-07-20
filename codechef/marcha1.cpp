#include <iostream>
#include <algorithm>

using namespace std;

// the knapstack algorithm function that solves the sum problem

int knapStack(int max_weight, int weights[], int values[], int n)
{
	int i, j;
	int k[n+1][max_weight+1];
	
	
	// build the table bottom up
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=max_weight;j++)
		{
			if(i==0||j==0)
			{
				k[i][j] = 0;
			}
			else if(weights[i-1]<=j)
			{
				k[i][j] = max(values[i-1] + k[i-1][j-weights[i-1]], k[i-1][j]);
			}
			else
			{
				k[i][j] = k[i-1][j];
			}
		}
		
		
	}
	return k[n][max_weight];
}


int main()
{
	
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin >> n;
		cin >> m;
		
		int max_weight = m; //  money that muggers ask. This is the capacity of our knapstack
		
		int values[n];
		int weights[n];
		
		// For this knapstack (to find if the sum is possible), we need to have the weights and values the same
		
		for(int j=0;j<n;j++)
		{
			cin >> values[j];
			weights[j] = values[j];
		}
		
		if(knapStack(max_weight, weights, values, n) == max_weight)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
