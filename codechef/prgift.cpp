#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		
		int a[n];
		
		int even_count = 0;
		
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			
			if(a[i]%2==0)
			{
				even_count++;
			}
		}
		
		if(k==0&&even_count==n)
		{
			cout << "NO" << endl;
		}
		
		else
		{
			if(even_count>=k)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}
	
	return 0;
}
		
		
