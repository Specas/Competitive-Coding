#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <string>
#include <list>
#include <limits.h>
#include <queue>
#include <stack>
#include <vector> 

using namespace std;

int main()
{
	string s;
	cin >> s;
	
	int len = s.length();
	
	int dp[len];
	int q[10];
	
	for(int i=0;i<len;i++)
	{
		dp[i] = 100000000;
	}
	
	dp[0] = 0;
	
	for(int i=0;i<20;i++)
	{
		// computing q[k]
		
		for(int k=0;k<10;k++)
		{
			q[k] = 100000000;
		}
		
		for(int i=0;i<len;i++)
		{
			q[s[i] - '0'] = min(q[s[i] - '0'], dp[i]);
		}
		
		// update the current interation
		
		for(int i=0;i<len;i++)
		{
			if(i>0)
			{
				dp[i] = min(dp[i], dp[i-1]+1);
			}
			if(i<len-1)
			{
				dp[i] = min(dp[i], dp[i+1]+1);
			}
			
			dp[i] = min(dp[i], q[s[i] - '0']+1);
		}
		
		//~ cout << "q" << endl;
		//~ for(int i=0;i<10;i++)
		//~ {
			//~ cout << q[i] << " ";
		//~ }
		//~ cout << endl;
		//~ 
		//~ cout << "-----------------------------" << endl;
		//~ 
		//~ cout << "dp" << endl;
		//~ for(int i=0;i<len;i++)
		//~ {
			//~ cout << dp[i] << " ";
		//~ }
		//~ 
		//~ cout << endl;
		//~ cout << "--------------------------" << endl;
	}
	
	cout << dp[len-1];
	
}
		
		
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
	

