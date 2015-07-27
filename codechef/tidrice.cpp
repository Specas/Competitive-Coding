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
		
		string names[n];
		int votes[n];
		
		string name;
		int k = 0;
		
		for(int i=0;i<n;i++)
		{
			cin >> name;
				
			char vc;
			
			cin >> vc;
			
			int v = (vc=='+')?1:-1;
			
			
			bool contains = false;
			
			for(int i=0;i<k;i++)
			{
				if(names[i].compare(name)==0)
				{
					votes[i] = v;
					contains = true;
				}
			}
			
			if(!contains)
			{
				names[k] = name;
				votes[k] = v;
				k++;
			}
			
		}
		
		int tot_votes = 0;
		
		for(int i=0;i<k;i++)
		{
			tot_votes += votes[i];
		}
		cout << tot_votes << endl;
	}
}
		
		
