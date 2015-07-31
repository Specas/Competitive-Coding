#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	cin.ignore(1,'\n');
	
	while(t--)
	{
		
		int n;
		cin >> n;
		
		cin.ignore(1,'\n');
		
		int dir[n];
		dir[0] = -1;
		string dest[n];

		
		for(int i=0;i<n;i++)
		{
			
			string s;
			getline(std::cin,s);
		
			int len = s.length();
			
			int pos = s.find("on");
			
			string dir_str = s.substr(0,pos-1);
			string dest_str = s.substr(pos+3, (len-pos-3));
			
			if(i!=0)
			{
				// We wont append to array for the begin.
				if(dir_str.compare("Right")==0)
				{
					// 1 for right
					dir[i] = 1;
				}
				else
				{
					dir[i] = 0;
				}
			}
			
			dest[i] = dest_str;
		}
		
		cout << "Begin on " << dest[n-1] << endl;
		
		for(int i=0;i<n-1;i++)
		{
			if(dir[n-i-1]==1)
			{
				cout << "Left on " << dest[n-i-2] << endl;
			}
			else
			{
				cout << "Right on " << dest[n-i-2] << endl;
			}
		}
		
		cout << endl;
		
	}
}
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
			
		
		
		
