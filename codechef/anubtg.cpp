#include <iostream>
#include <algorithm>

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
		
		sort(a, a+n, greater<int>());

		
		int cost = 0;
		
		if(n<4)
		{
			cout << a[0]+a[1] << endl;
			goto label;
		}
		else
		{
			for(int i=0;i<n;i=i+4)
			{
				
				//~ cout << i << endl;
				
				//~ cout << a[0] << " " << a[1] << " " << endl << endl;
				if((n-i)>=4)
				{
					cost = cost + a[i]+ a[i+1];
				}
				else if((n-i)>=2)
				{
					cost = cost + a[i] + a[i+1];
				}
				else if((n-i)==1)
				{
					cost = cost + a[i];
				}
				
				
			}
		}
		
		
		cout << cost << endl;
		
		label:;
	}
}

		
		
