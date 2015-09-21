#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		string a,b;
		cin >> a >> b;
		
		int lena = a.length();
		
		int gravity_jumps = 0;
		
		bool lane_a = true;
		
		if((a[0]!='.')&&(b[0]=='.'))
		{
			lane_a = false;
		}
		
		if((a[0]!='.')&&(b[0]!='.'))
		{
			cout << "No" << endl;
			goto end;
		}
		
		
		for(int i=0;i<lena;i++)
		{
			
			if(i==(lena-1))
			{
				break;
			}
			
			
			
			if(lane_a)
			{

				if(a[i+1]!='.')
				{
					if(b[i+1]=='.')
					{
						lane_a = false;
						gravity_jumps++;
					}
					
					else if(b[i]=='.')
					{
						i--;
						lane_a = false;
						gravity_jumps++;
					}
					else
					{
						cout << "No" << endl;
						cout << "Here" << i << endl;
						goto end;
					}
				}
			}
			else
			{
				if(b[i+1]!='.')
				{
					if(a[i+1]=='.')
					{
						lane_a = true;
						gravity_jumps++;
					}
					else if(a[i]=='.')
					{
						i--;
						lane_a = true;
						gravity_jumps++;
					}
					else
					{
						cout << "No" << endl;
						goto end;
					}
				}
			}
		}
		
		cout << "Yes" << endl << gravity_jumps << endl;
		
		end :;

	}

}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
