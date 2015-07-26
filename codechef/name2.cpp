#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		string a, b;
		cin >> a >> b;
		
		int lena = a.length();
		int lenb = b.length();
		
		
		// checking for subsequence
		// dp solution
		
		int k=0;
		
		
		if(lena>lenb)
		{
			for(int i=0;i<lena;i++)
			{
				if(a[i]==b[k])
				{
					k++;
					continue;
				}
				else
				{
					continue;
				}
				if(k==lenb)
				{
					break;
				}
			}
			
			if(k==lenb)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
		else
		{
			for(int i=0;i<lenb;i++)
			{
				if(b[i]==a[k])
				{
					k++;
					continue;
				}
				else
				{
					continue;
				}
				if(k==lena)
				{
					break;
				}
			}
			
			if(k==lena)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}
}
		
		
			
			
			
			
			
			
			
			
			
			
			
			
			
			


