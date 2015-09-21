#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n, m;
		scanf("%d", &n);
		scanf("%d", &m);
		
		int a[m];
		
		// We sort using counting sort to increase efficiency
		
		int csort[100001] = {0};
		
		for(int i=0;i<m;i++)
		{
			scanf("%d", &a[i]);
			csort[a[i]]++;
		}
		
		//~ sort(a, a+m);
		
		int pos = 0;
		
		// Counting sort to increase efficienty
		
		for(int i=1;i<=100000;i++)
		{
			int kk = csort[i];
			if(kk!=0)
			{
				for(int j=0;j<kk;j++)
				{
					a[pos] = i;
					pos++;
				}
			}
		}
		
		

		 int ans = 0;
		 int p = 0;
		 int k = 0;
		 int x = 0;
		
		for(int i = 0;i<m-1;i++)
		{
			k = a[i]; // ith element
			x = m-i-1-p; // no of elements after ith element
			
			if(x==0)
			{
				// x is zero when everything has been paired
				break;
			}
			
			if(k>=x)
			{
				ans = ans + x;
				break;
			}
			
			else if(k<x)
			{
				
				ans = ans + k;
				p = p + k;
			}
		}
		
		cout << ans << endl;
		
	}
}
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
			
			
			
			
				
			
