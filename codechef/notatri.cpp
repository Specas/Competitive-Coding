#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;


int main()
{
	while(true)
	{
		int n;
		cin >> n;
		
		if(n==0)
		{
			break;
		}
		
		int count=0;
		
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		sort(a,a+n);
		
		for(int i=n-1;i>=0;i--)
		{
			int j = i-1;
			int k=0;
			
			while(j>k)
			{
				if((a[k]+a[j])<a[i])
				{
					count = count + (j-k);
					k++;
				}
				else
				{
					j--;
				}
			}
		}
			
			
		
		cout << count << endl;
	}
	
	return 0;
}
					
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
