#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	cin.ignore(1,'\n');
	
	while(t--)
	{
		string s;
		getline(std::cin,s);
		
		int f[26] = {0};
		
		// converting to lowercase
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		
		int len = s.length();
		
		for(int i=0;i<len;i++)
		{
			char c = s[i];
			if((c>='a')&&(c<='z'))
			{
				// only alphabets
				f[c-'a']++;
			}
		}
		

		
		for(int i=0;i<26;i++)
		{
			if(f[i]==0)
			{
				cout << (char)(i+97) << endl;
				goto label;
			}
		}
		
		cout << "~" << endl;
		
		label:;
	}
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		
