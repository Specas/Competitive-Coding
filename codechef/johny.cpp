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
		
		int k;
		cin >> k;
		
		int key = a[k-1];
		
		int pos = 0;
		
		for(int i=0;i<n;i++)
		{
			if(a[i]<key)
			{
				pos++;
			}
		}
		pos++;
		cout << pos << endl;
	}
	
	return 0;
}
