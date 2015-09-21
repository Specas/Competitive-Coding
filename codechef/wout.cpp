#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,h;
		cin >> n >> h;
		
		int soil[n];
		for(int i=0;i<n;i++)
		{
			soil[i]=n;
		}
		
		for(int i=0;i<n;i++)
		{
			int ii,hh;
			cin >> ii >> hh;
			

			for(int j=ii;j<=hh;j++)
			{

				soil[j]--;
			}
		}
		
		// printing
		//~ for(int i=0;i<n;i++)
		//~ {
			//~ cout << soil[i] << " ";
		//~ }
		//~ cout << endl;
		
		
		int min = 0;
		for(int i=0;i<h;i++)
		{
			min = min + soil[i];
		}

		
		int val = min;
		
		
		for(int i=0;i<(n-h);i++)
		{
			int tmin = val - soil[i] + soil[i+h];
			val = tmin;
			
			if(tmin<min)
			{
				min = tmin;
			}
		}
		
		cout << min << endl;
	}
}
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
				
			
			
