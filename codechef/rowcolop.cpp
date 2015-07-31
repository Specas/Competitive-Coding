#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;
	
	int row[314160]={0};
	int col[314160]={0};
	
	while(q--)
	{
		char s[10];
		int x, k;
		
		cin >> s >> x >> k;
		
		if(s[0]=='R')
		{
			row[x-1]+=k;
		}
		else if(s[0]=='C')
		{
			col[x-1]+=k;
		}
	}
		
		// the resulting max is the sum of the max numbers of row and col
		
		int maxrow=row[0];
		int maxcol = col[0];
		
		for(int i=1;i<n;i++)
		{
			
			maxrow = max(maxrow, row[i]);
			maxcol = max(maxcol, col[i]);
			
		}
		
		cout << (maxrow+maxcol) << endl;
	
	
	return 0;
}
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

