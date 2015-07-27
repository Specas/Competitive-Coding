#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int k;
		cin >> k;
		
		int branches = 1;
		
		bool good = true;
		int a;
		
		for(int i=0;i<k;i++)
		{
			
			cin >> a;
			
			if((a!=branches)&&(i==(k-1)))
			{
				good = false;
			}
			
			if((a>branches)||(branches<0))
			{
				good = false;
				
			}
			
			branches = (branches-a)*2; // branches on the next level
			

			
		}
		
		
		
		if(good)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
