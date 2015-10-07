#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int mainf[26] = {0};
	
	string s;
	cin >> s;
	
	int len = 0;
	
	len = s.length();
	
	for(int i=0;i<len;i++)
	{
		char ch = s[i];
		int ck = ch;
		mainf[ck - 97]++;
	}
	
	
	for(int ii=1;ii<n;ii++)
	{
		int localf[26] = {0};
		
		string ss;
		cin >> ss;
		
		len = ss.length();
			
		for(int i=0;i<len;i++)
		{
			char ch = ss[i];
			int ck = ch;
			localf[ck - 97]++;
		}
		
		for(int i=0;i<26;i++)
		{
			if(mainf[i] == 0 || localf[i] == 0)
			{
				mainf[i] = 0;
			}
			else
			{
				mainf[i] = min(mainf[i], localf[i]);
			}
		}
	}
	
	
	int sum = 0;
	
	for(int i=0;i<26;i++)
	{
		sum = sum+mainf[i];
		char cc = i+97;
		for(int j=0;j<mainf[i];j++)
		{
			cout << cc;
		}
	}
	
	if(sum==0)
	{
		cout << "no such string"<< endl;
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
