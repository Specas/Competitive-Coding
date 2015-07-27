#include <iostream>
#include <string>

using namespace std;

int main()
{
	int k, n;
	cin >> k >> n;
	
	string lucky[k];
	
	for(int i=0;i<k;i++)
	{
		cin >> lucky[i];
	}
	
	while(n--)
	{
		string s;
		cin >> s;
		
		int len = s.length();
		
		bool sub = false;
		
		for(int i=0;i<k;i++)
		{
			if((s.find(lucky[i]))!=(string::npos))
			{
				sub = true;
			}
		}
		
		if(sub||(len>=47))
		{
			cout << "Good" << endl;
		}
		else
		{
			cout << "Bad" << endl;
		}
	}
}
	
