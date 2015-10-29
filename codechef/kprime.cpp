#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>

using namespace std;

	
int arr[100001];
int prime[100001];

int main()
{


	
	for(int i=0;i<100001;i++)
	{
		arr[i] = i;
	}
	
    for(int i=2;i<100001;i++)
    {
        if(arr[i]==i)
        {
            prime[i]++;
            for(int j=2*i;j<100001;j+=i)
            {
               prime[j]++;
               arr[j]=min(arr[j],i);
            }
        }
    }
    
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		
		int a,b,k;
		scanf("%d %d %d", &a, &b, &k);
		
		
		
		//~ for(int i=0;i<=b;i++)
		//~ {
			//~ cout << isprime[i] << " ";
		//~ }
		//~ cout << endl;
		
		//~ for(int i=0;i<=b;i++)
		//~ {
			//~ cout << marked[i] << " ";
		//~ }
		//~ cout << endl;
		
		// Memoization to get the result in constant time from the table
		
		
		
	
		
		
		
		//~ int table[5][b+1];
		//~ for(int i=0;i<5;i++)
		//~ {
			//~ for(int j=0;j<=b;j++)
			//~ {
				//~ table[i][j] = 0;
			//~ }
		//~ }
		//~ 
		//~ for(int i=2;i<=b;i++)
		//~ {
			//~ for(int j=0;j<5;j++)
			//~ {
				//~ table[j][i] = table[j][i-1];
			//~ }
			//~ int v = marked[i];
			//~ if(v>=1 && v<=5)
			//~ {
				//~ table[v-1][i]++;
			//~ }
		//~ }
		//~ 
		
		
	
		//~ cout << endl;
		//~ 
		//~ for(int i=0;i<5;i++)
		//~ {
			//~ for(int j=0;j<=b;j++)
			//~ {
				//~ cout << table[i][j] << " ";
			//~ }
			//~ cout << endl;
		//~ }
		//~ 
		
		
		int ans = 0;
		
		for(int i = a;i<=b;i++)
		{
			if(prime[i]==k)
			{
				ans++;
			}
		}
		
		printf("%d\n", ans);
		
		
		
		
		
		
		
		//~ printf("%d\n", table[k-1][b] - table[k-1][a-1]);
			
		
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
