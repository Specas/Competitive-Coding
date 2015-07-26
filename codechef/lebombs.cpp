#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		string s;
		cin >> s;
		
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			a[i] = s[i] - '0'; // converting to int (not ascii)
		}
		
		// count stores the number of unaffected buildings
		int count = 0;
		
		// if the building has exploded, we represented it using -1
		
		for(int i=0;i<n;i++)
		{
			if(a[i] == 1)
			{
				// special cases for first and last building
				if(i==0)
				{
					a[i]=-1;
					a[i+1]=-1;
				}
				else if(i==(n-1))
				{
					a[i] = -1;
					a[i-1] = -1;
				}
				else
				{
					a[i] = -1;
					a[i+1] = -1;
					a[i-1] = -1;
				}
			}
			
		}
		
		for(int i=0;i<n;i++)
		{
			if(a[i]!=-1)
			{
				count++;
			}
		}
		
		cout << count << endl;
				
	}
}
		
		
