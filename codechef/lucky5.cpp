#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		string s;
		cin >> s;
		
		int len = s.length();
		
		int count = 0;
		
		// no of operations is the number of digits not equal to 4 or 7
		
		for(int i=0;i<len;i++)
		{
			char c = s[i];
			
			int k = c - '0';
			
			if((k!=4)&&(k!=7))
			{
				count++;
			}
		}
		
		cout << count << endl;
	}
	
	return 0;
}
