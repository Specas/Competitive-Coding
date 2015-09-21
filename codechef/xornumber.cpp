#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	long long int arr[31];
	
	for(int i=0;i<31;i++)
	{
		arr[i] = pow(2, i);
	}
	
	while(t--)
	{
		
		long long int n;
		long long ans=0;
		
		scanf("%lld", &n);
		
		if(n==1)
		{
			cout << 2 << endl;
		}
		else
		{
			for(int j=0;j<31;j++)
			{
				if(n==(arr[j]+arr[j]-1))
				{
					ans = arr[j]-1;
					break;
				}
			}
			
			if(ans == 0)
			{
				cout << -1 << endl;
			}
			else
			{
				printf("%lld\n", ans);
			}
		}
	}
		
	return 0;
}
		
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
		

