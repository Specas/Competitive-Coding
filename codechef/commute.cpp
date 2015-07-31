#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		int curr_time = 0;
		
		for(int i=0;i<n;i++)
		{
			int x, l, f;
			
			cin >> x >> l >> f;
			
			if(x>=curr_time)
			{
									
				curr_time = x+l; // to get to next station
				
			}
	
			else if(x<curr_time)
			{
				
				int k=x;
				
				while(curr_time>k)
				{
					k+=f;
				}
				
				curr_time = k;
				curr_time = curr_time + l;
			}
			
			//~ cout << curr_time << endl << endl;
		}
		
		cout << curr_time << endl;
	}
	return 0;
}
				
			
			
			
			
			
	
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
