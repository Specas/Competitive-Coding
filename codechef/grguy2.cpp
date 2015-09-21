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
		
		int len = a.length();
		
		int times = 0;
		int times2 = 0;
		int up = 0;
		int preup = 0;
		
		bool dual = false;

		
		if(a[0] == '.')
		{
			preup = 1;
			if(b[0] == '.')
			{
				dual = true;
			}
		}
		else if(b[0] == '.')
		{
			preup = 0;
		}
		else
		{
			cout << "No" << endl;
			goto label;
		}
		
		
		for(int i=1;i<len;i++)
		{
			char c1 = a[i];
			char c2 = b[i];
			
			if((c1 == '#')&&(c2 == '#'))
			{
				// Not possible to proceed
				cout << "No" << endl;
				goto label;
			}
			
			else
			{
				
				if((c1=='.')&&(c2 == '#'))
				{
					up = 1;

				}
				else if((c1=='#')&&(c2 == '.'))
				{
					up = 0;
				}
				// if both are '.' then stay on the same lane
				
				if(preup!=up)
				{
					// switch gravity
					times++;
				}
				
				preup = up;
			}
		}

		
		if(dual)
		{
			preup = 0;
		
			for(int i=1;i<len;i++)
			{
				char c1 = a[i];
				char c2 = b[i];
				
				if((c1 == '#')&&(c2 == '#'))
				{
					// Not possible to proceed
					cout << "No" << endl;
					goto label;
				}
				
				else
				{
					
					if((c1=='.')&&(c2 == '#'))
					{
						up = 1;

					}
					else if((c1=='#')&&(c2 == '.'))
					{
						up = 0;
					}
					// if both are '.' then stay on the same lane
					
					if(preup!=up)
					{
						// switch gravity
						times2++;
					}
					
					preup = up;
				}
			}
		}
			
			
		
		
		
		cout << "Yes" << endl;
		if(dual)
		{
			if(times<times2)
			{
				cout << times << endl;
			}
			else
			{
				cout << times2 << endl;
			}
		}
		else
		{
			cout << times << endl;
		}
		
		label :;
	}
}

				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
