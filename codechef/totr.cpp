#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	string s;
	cin >> t;
	cin >> s;
	
	int lower[26];
	int upper[26];
	
	for(unsigned int i=0;i<s.length();i++)
	{
		lower[i] = (int)s[i];
		upper[i] = lower[i] - 32;
	}
	

	
	while(t--)
	{
		string st;
		cin >> st;
		
		for(unsigned int i=0;i<st.length();i++)
		{
			char c = (char)st[i];

			
			if(c=='_')
			{
				cout << " ";
			}
			
			else if(isalpha(c))
			{
			
				if(isupper(c))
				{
					cout << (char)upper[(int)c-65];
				}
				else
				{
					cout << (char)lower[(int)c-97];
				}
			}
			else
			{
				cout << c;
			}
		}
		
		cout << endl;
	}
	return 0;
}
			
			
			
			
			
			
			
			
			
			
