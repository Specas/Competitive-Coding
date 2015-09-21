#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void freq(int[], string);

void freq(int a[], string s)
{
	// we store the frequency of each character
	int len = s.length();
	
	for(int i=0;i<len;i++)
	{
		a[s[i]-'a']++;
	}
}
	

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		string a, b;
		cin >> a >> b;
		
		// concatenation of parents names
		string parents = a+b;
		
		int n;
		cin >> n;
		
		// concatenation of the names of the children
		string children = "";
		for(int i=0;i<n;i++)
		{
			string s;
			cin >> s;
			children = children + s;
		}
		
		int fparent[26] = {0};
		int fchildren[26] = {0};
		
		freq(fparent, parents);
		freq(fchildren, children);
		
		
		for(int i=0;i<26;i++)
		{
			if(fchildren[i]>fparent[i])
			{
				cout << "NO" << endl;
				goto label;
			}
		}
		
		cout << "YES" << endl;
		
		label:;
	}
}

		
		
		
		
		
