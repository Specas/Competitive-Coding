#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		string s, j;
		
		cin >> j;
		cin >> s;
		
		int len1 = j.length();
		int len2 = s.length();
		
		int gem_count = 0;
		
		// Brute force algorithms
		
		for(int i=0;i<len2;i++)
		{
			for(int k=0;k<len1;k++)
			{
				
				if(s[i]==j[k])
				{
					gem_count++;
					break;
				}
			}
		}
		
		cout << gem_count << endl;
		
	}
	return 0;
}
