#include <iostream>
#include <math.h>
#include <algorithm>
#include <cstdio>
#include <iomanip>

using namespace std;

double dist(int, int, int, int);

double dist(int x1, int y1, int x2, int y2)
{
	// distance formula
	
	double d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	return d;
}


int main()
{
	
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		
		
		int x[10001];
		int y[10001][n];
		
		
		
		// default to -1
		
		for(int i=0;i<10001;i++)
		{
			for(int j=0;j<n;j++)
			{
				y[i][j] = -1;
			}
		}
		
		int k=0;
		
		for(int i=0;i<n;i++)
		{
			int a,b;
			cin >> a;
			cin >> b;
			x[a]++;
			k = x[a]-1;
			y[a][k]=b;
			
			
		}
		
		for(int i=0;i<n;i++)
		{	
			sort(y[i],y[i]+n, greater<int>());
		}
		
		//~ for(int i=0;i<10;i++)
		//~ {
			//~ for(int j=0;j<5;j++)
			//~ {
				//~ cout << y[i][j] << " ";
			//~ }
			//~ cout << endl << endl;
		//~ }
		
		double result = 0;
		
		int xx[n], yy[n];
		
		k=0;
		
		for(int i=0;i<10001;i++)
		{
			
				
				for(int j=0;j<n;j++)
				{
					if(y[i][j]==-1)
					{
						break;
					}
					else
					{
						xx[k] = i;
						yy[k] = y[i][j];
						k++;
					}
				}
			
		}
		
		
		for(int i=1;i<n;i++)
		{
			result = result + dist(xx[i], yy[i], xx[i-1], yy[i-1]);
		}
		
		cout << setprecision(2) << fixed << result << endl;
	}
}

		

	
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

		
		

