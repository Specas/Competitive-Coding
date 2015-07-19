#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
		int n,m;
		
		cin >>n;
		cin >>m;
		
		int jobs[n];
		
		int jobs_left = n-m;
		
		
		int to_be_completed[jobs_left];
		
		for(int j=0;j<n;j++)
		{
			jobs[j] = j+1;
		}	
		
		//completed jobs
		for(int j=0;j<m;j++)
		{
			int x;
			cin >> x;
			jobs[x-1] = -1;
		}
		
		int jj = 0;
		
		for(int j=0;j<n;j++)
		{
			if(jobs[j]!=-1)
			{
				to_be_completed[jj] = jobs[j];
				++jj;
			}
		}
		
		// print chef's
		for(int j=0;j<jobs_left;j=j+2)
		{
			cout << to_be_completed[j] << " ";
		}
		cout << endl;
		
		//assistant's
		for(int j=1;j<jobs_left;j=j+2)
		{
			cout << to_be_completed[j] << " ";
		}
		cout << endl;
		
	}
	
	return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
