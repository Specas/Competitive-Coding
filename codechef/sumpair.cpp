#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n, d;
		cin >> n >> d;
		
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		sort(a, a+n, std::greater<int>());
		
		long long int sum = 0;
		
		for(int i=0;i<n-1;i++)
		{
			int diff = a[i] - a[i+1];
			if(diff<d)
			{
				sum = sum + a[i] + a[i+1];
				i++;
			}
		}
		
		cout << sum << endl;
	}
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
	
