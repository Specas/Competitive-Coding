#include <iostream>
#include <algorithm>

using namespace std;

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
	
	while(t--)
	{
		int n,w;
		cin >> n >> w;
		
		int c[n];
		int p[n];
		int ti[n];
		int val[n];
		
		for(int i=0;i<n;i++)
		{
			cin >> c[i] >> p[i] >> ti[i];
			val[i] = c[i]*p[i];
		}
		
		cout << knapStack(w, ti, val, n) << endl;
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
