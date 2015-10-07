#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		long long int a[n];
		
		for(int i=0;i<n;i++)
		{
			scanf("%lld", &a[i]);
		}
		
		long long int k;
		long long int ans;
		
		ans = 1;
		k = 2;
		
		for(int i=1;i<n;i++)
		{
			long long int num = a[i];
			
			if(num>=a[i-1])
			{
				ans = ans + k;
				k++;
			}
			else
			{
				ans++;
				k=2;
			}
		}
		
		cout << ans << endl;
	}
}
