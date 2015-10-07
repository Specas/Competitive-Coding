#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>
#include <algorithm> // for atoi
#include <sstream>

using namespace std;

long long int sum(long long int ss)
{
	
	ostringstream ostr;
	ostr << ss;
	
	string s = ostr.str();
	
	
	int len = s.length();
	
	long long int sm = 0;
	
	for(int i=0;i<len;i++)
	{
		
		char c = s[i];
		int ck = c - '0';
		
		if(ck%2==0)
		{
			sm = sm + (2*ck);
		}
		else
		{
			sm = sm + ck;
		}
	}
	
	return sm;
}

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		string a,b;
		cin >> a >> b;
		
		long long int smm = 0;
		long long int finsum = 0;
		
		long long int aa = atoi(a.c_str());
		long long int bb = atoi(b.c_str());
		
		for(long long int i=aa;i<=bb;i++)
		{
			smm = sum(i);
			finsum = finsum + smm%10;
		}
		
		cout << finsum << endl;
	}
	
	
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
