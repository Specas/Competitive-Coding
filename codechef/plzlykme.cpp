#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		long long int l, d, s, c;
		cin >> l >> d >> s >> c;
		
		long long int i;
		long long int likes=0;
		
		
		for(i=0;i<d;i++)
		{
			
			if(i==0)
			{
				likes = s;
			}
			else
			{
				likes = s + s*c;
			}
			
			if(likes>=l)
			{
				cout << "ALIVE AND KICKING" << endl;
				goto label;
			}
			
			s = likes;
		}
		
		cout << "DEAD AND ROTTING" << endl;
		
		label:;
	}
	
	return 0;
}
