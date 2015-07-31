#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	// The following line makes sure that getline doesnt skip the first input, which it otherwise does.
	cin.ignore(1,'\n');
	
	while(t--)
	{
		string s;
		
		getline(std::cin,s);

		
		char firstcol = s[0];
		char firstrow = s[1];
		char dash = s[2];
		char seccol = s[3];
		char secrow = s[4];
		
		
		
		
		if((((firstcol>='a')&&(firstcol<='h'))&&((firstrow>='1')&&(firstrow<='8')))&&((dash=='-')&&(((seccol>='a')&&(seccol<='h'))&&((secrow>='1')&&(secrow<='8')))))
		{
			int rowd = abs(firstrow-secrow);
			int cold = abs(firstcol-seccol);
			
			if(((rowd==2)&&(cold==1))||((rowd==1)&&(cold==2)))
			{
				cout << "Yes" << endl;
			}
			
			else
			{
				cout << "No" << endl;
			}
		}
		else
		{
			cout << "Error" << endl;
		}
		
	}
}
		
		
		
