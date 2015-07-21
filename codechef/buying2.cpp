#include <iostream>

using namespace std;

int main()
{
	
	int t;
	cin >> t;
	
	while(t--)
	{
	
		int n,x;
		cin >> n;
		cin >> x;
		
		int a[n];
		
		int min;
		int sum = 0;
		
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			sum+=a[i];
			if(i==0)
			{
				min = a[0];
			}
			else
			{
				if(a[i]<min)
				{
					min = a[i];
				}
			}
		}
		
		int k = sum/x;
		int kk = (sum-min)/x;
		
		// Customer is inadequate, if he can buy the number of sweets even after we remove any banknote. We get bounded condition by removing
		// banknote with the least value
		
		if(k==kk)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << k << endl;
		}
	}
	return 0;
}
	
	

	

