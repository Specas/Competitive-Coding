#include <iostream>
#include <string>

using namespace std;

int ncr(int, int);

int ncr(int n, int r)
{
	
	// factorials as r is atmost 6
	int fact[7] = {1,1,2,6,24,120,720};
	
	int f = n;
	
	for(int k=1;k<r;k++)
	{
		f = f*(--n);
	}	
	
	return f/(fact[r]);
}
	

int main()
{
	
	int x, n;
	cin >> x;
	cin >> n;
	long long int ans = 0;
	
	for(int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		
		
		for(int j=0;j<9;j++)
		{
			// indices for all the cars in the train
			int p1 = 4*j;
			int p2 = p1+1;
			int p3 = p2+1;
			int p4 = p3+1;
			int p5 = 53-(2*j);
			int p6 = p5-1;
			
			// number of empty places = 6 - (number of filled places)
			int empty = 6 - ((s[p1]-'0')+(s[p2]-'0')+(s[p3]-'0')+(s[p4]-'0')+(s[p5]-'0')+(s[p6]-'0'));		
			
			// from 'empty' number of empty places, we need x tickets
			int ways = ncr(empty,x);
			
			// add to the answer
			ans = ans + ways;
		}
	}
	cout << ans;
}
			
			
		
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
	
	
