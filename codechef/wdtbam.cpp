#include <iostream>
#include <string>
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
		
		string s1, s2;
		cin >> s1;
		cin >> s2;
		
		long long int w[n+1];
		
		for(int i=0;i<=n;i++)
		{
			scanf("%lld", &w[i]);
		}
		
		int sum = 0;
		
		for(int i=0;i<n;i++)
		{
			if(s1[i] == s2[i])
			{
				sum++;
			}
		}
		
		// corner case for sum == n
		if(sum==n)
		{
			cout << w[n] << endl;

		}
		else
		{
		
		long long int ans = w[0];
		
		for(int i=0;i<=sum;i++)
		{
			if(w[i]>ans)
			{
				ans = w[i];
			}
		}
		
		cout << ans << endl;
	}
		

	}
}
