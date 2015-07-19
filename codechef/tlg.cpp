#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int curra, currb;
	curra = 0;
	currb = 0;
	
	int maxlead = 0;
	int winningPlayer = 0;
	
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin >> a >> b;
		
		curra = curra + a;
		currb = currb + b;
		
		int lead = curra - currb;
		
		// If the lead is positive, player 1 is leading, else player 2
		
		if(lead>0)
		{
			if(lead>maxlead)
			{
				winningPlayer = 1;
				maxlead = lead;
			}
		}
		else
		{
			lead = lead*(-1);
			if(lead>maxlead)
			{
				winningPlayer = 2;
				maxlead = lead;
			}
		}
		
	}
	
	cout << winningPlayer << " " << maxlead;
	
	return 0;
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
