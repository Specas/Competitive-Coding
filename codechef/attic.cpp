#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		string s;
		cin >> s;
		
		int len = s.length();
		
		int days = 0;
		
		int curr_max = 0;
		
		int i,j;
		
		for(i=0;i<len;i++)
		{
			char c = s[i];
			if(c=='#')
			{
				continue;
			}
			
			else
			{
				int curr = 1;
				
				
				for(j=i;;j++)
				{
					// finding number of continuous dots
					if(s[j+1]=='.')
					{
						curr++;
						continue;
					}
					else
					{
						break;
					}
				}
				i=j;
				
				
				if(curr>curr_max)
				{
					days++;
					curr_max = curr;
				}
			}
		}
		
		cout << days << endl;
	}
	
	return 0;
}
						
						
						
						
						
						
						
						
						
						
