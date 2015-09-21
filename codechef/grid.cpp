#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		int a[n][n];
		
		for(int i=0;i<n;i++)
		{
			string s;
			cin >> s;
			
			for(int j=0;j<n;j++)
			{
				if(s[j]=='#')
				{
					a[i][j] = -1; // rock
				}
				else if(s[j] == '.')
				{
					a[i][j] = 0; // no rock
				}
			}
		}
		
		
		
		// we check if a mirror can be placed on each cell
		int ans = 0;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				
				int flag_colclear = 0;
				int flag_rowclear = 0;
				
				if(a[i][j]==-1)
				{
					// rock.
					continue;
				}
				
				
				// row check
				for(int ii=j+1;ii<n;ii++)
				{
					if(a[i][ii]==-1)
					{
						flag_colclear = 1;
						break;
					}
				}
				
				// col check
				for(int jj=i+1;jj<n;jj++)
				{
					if(a[jj][j]==-1)
					{
						flag_rowclear = 1;
						break;
					}
				}
				
				if((flag_rowclear==0)&&(flag_colclear==0))
				{
					ans++;
				}
			}
		}
		
		cout << ans << endl;
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
