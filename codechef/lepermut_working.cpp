#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		
		int n;
		cin >> n;
		
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		// Brute force to calculate the no. of inversions and local inversions
		
		int inv = 0;
		int local_inv = 0;
		
		for(int i=0;i<n-1;i++)
		{
			
			// local
			if(a[i]>a[i+1])
			{
				local_inv++;
			}
			
				
			for(int j = i+1;j<n;j++)
			{
				// we compute both inversions here
				
				
				// normal inversion
				if(a[i]>a[j])
				{
					inv++;
				}
			}
		}

		
		
		if(inv==local_inv)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	
	return 0;
}				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
