#include <iostream>
#include <string.h>



using namespace std;

int main()
{
	
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
		int char_freq_lower[26] = {0};
		int char_freq_upper[26] = {0};
		
		char jewel[201];

		cin >> jewel;
		
		int nn = (unsigned)strlen(jewel);
		
		for(int j=0;j<nn;j++)
		{
			char c = jewel[j];
			if(islower(c))
			{
				char_freq_lower[int(c)-97]++;
			}
			else
			{
				char_freq_upper[int(c)-65]++;
			}
		}
		
		
		int cost = 0;
		
		// calculating cost
		
		for(int j=0;j<26;j++)
		{
			if(char_freq_lower[j]!=0)
			{
				// dividing each by 2 because of the discount
				if(char_freq_lower[j]%2==0)
				{
					cost = cost + (char_freq_lower[j]/2);
				}
				else
				{
					cost = cost  + ((char_freq_lower[j]+1))/2;
				}
			}
			
			if(char_freq_upper[j]!=0)
			{
				// dividing each by 2 because of the discount
				if(char_freq_upper[j]%2==0)
				{
					cost = cost + (char_freq_upper[j]/2);
				}
				else
				{
					cost = cost  + ((char_freq_upper[j]+1))/2;
				}
			}
			
			
		}
		
		cout << cost << endl;
		
		cost = 0;
		
		
		
	}
	
	return 0;
}
