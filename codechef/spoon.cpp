#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int r,c;
		cin >> r >> c;
		
		string s[r];
		for(int i=0;i<r;i++)
		{
			cin >> s[i];
			// converting to lower case

			transform(s[i].begin(), s[i].end(), s[i].begin(), ::tolower);
		}
		
		// check for spoon in each row
		
		for(int i=0;i<r;i++)
		{
			if(s[i].find("spoon")!=std::string::npos)
			{
				cout << "There is a spoon!" << endl;
				goto label;
			}
		}
		
		// Now we search column wise
		
		for(int i=0;i<c;i++)
		{
			string cols = "";
			char c;
			for(int j=0;j<r;j++)
			{
				c = s[j][i];
				cols = cols + c;
			}
			
			if(cols.find("spoon")!=std::string::npos)
			{
				cout << "There is a spoon!" << endl;
				goto label;
			}
		}
		
		cout << "There is indeed no spoon!" << endl;
		
		label :;
	}
}

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	

