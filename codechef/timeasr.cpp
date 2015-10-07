#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

void printtime(int hr, int min)
{
	if(hr<10)
	{
		cout << 0 << hr;
	}
	else
	{
		cout << hr;
	}
	cout << ":";
	
	if(min<10)
	{
		cout << 0 << min;
	}
	else
	{
		cout << min;
	}
	
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		double a;
		cin >> a;
		
		// For every minute, the minute hand moves by 6 degrees and the hour hand moves by 0.5 degrees
		
		double thresh = 1/120.0;
		
		double minangle = 0.0;
		double hourangle = 0.0;
		
		for(int i=0;i<=11;i++)
		{
			for(int j=0;j<=59;j++)
			{
				minangle = j*6.0;
				hourangle = i*30.0 + j*0.5;
				
				double diff = abs(hourangle - minangle);
				
				if(diff>180.0)
				{
					diff = 360.0 - diff;
				}
				
				double tdiff = abs(diff - a);
				
				if(tdiff<thresh)
				{
					printtime(i,j);
				}
			}
		}
	}
}
				
				
		
	
	
