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
		
		string a = "101";
		string b = "010";
		
		if((s.find(a)==string::npos)&&(s.find(b)==string::npos))
		{
			// both arent present
			cout << "Bad" << endl;
		}
		else
		{
			cout << "Good" << endl;
		}
		
	}
}
		
