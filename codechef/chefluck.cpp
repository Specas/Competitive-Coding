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
		
		int i=0;
		int j=0;
		int temp;
		
		bool done = false;
		

	    while(true)
		{
			while(true)
			{
				temp = i+j;
				
				if(temp==n)
				{
					cout << i << endl;
					done = true;
					break;
				}
				if(temp>n)
				{
					break;
				}
				
				
				i = i+7;
			}
			if(done)
			{
			    break;
			}
			i=0;
			j=j+4;
			if((i+j)>n)
			{
				cout << "-1"<< endl;
				break;
			}
			
		}
		
		
	}
	
	return 0;
}
