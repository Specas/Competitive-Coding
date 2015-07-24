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
		
		// 0(n) algorithm
		// We traverse and if the required condition is not satisfied, we swap the variables
		
		int tmp;
		
		for(int i=0;i<n-1;i++)
		{
			if(i%2==0)
			{
				if(a[i]<=a[i+1])
				{
					continue;
				}
				else
				{
					tmp = a[i];
					a[i] = a[i+1];
					a[i+1] = tmp;
				}
			}
			else
			{
				if(a[i]>=a[i+1])
				{
					continue;
				}
				else
				{
					tmp = a[i];
					a[i] = a[i+1];
					a[i+1] = tmp;
				}
			}
		}
		
		for(int i=0;i<n;i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
