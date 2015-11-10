#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <list>
#include <limits.h>
#include <queue>
#include <stack>
#include <vector>
#include <stdlib.h> 

using namespace std;

int main()
{
	
	int t;
	cin >> t;
	
	while(t--)
	{
	
		int n,m;
		cin >> n >> m;
		
		int p[m];
		
		for(int i=0;i<m;i++)
		{
			cin >> p[i];
		}
		
		vector <int> a[n];
		
		for(int i=0;i<n;i++)
		{
			int c;
			cin >> c;
			
			for(int j=0;j<c;j++)
			{
				int k;
				cin >> k;
				
				a[i].push_back(k);
			}
			
			sort(a[i].begin(), a[i].end(), greater<int>());
		}
		
		long long int ans = 0;
		
		for(int i=0;i<m;i++)
		{
			ans+=a[p[i]][0];
			a[p[i]][0] = 0;
			sort(a[p[i]].begin(), a[p[i]].end(), greater<int>());
		}
		
		cout << ans << endl;
	}
}


