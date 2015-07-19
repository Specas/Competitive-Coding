#include <iostream>
using namespace std;



int main()
{
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
		int n;
		cin >> n;
		
		int table[10001] = {0};
		
		
		
		int arr[n];
		
		for(int j=0;j<n;j++)
		{
			cin >> arr[j];
			// Incrementing that position
			++table[arr[j]];
		}
		
		//finding max
		int max = 0;
		int pos = 0;
		for(int j=0;j<10001;j++)
		{
			if(table[j]>max)
			{
				max = table[j];
				pos = j;
			}
		}
		
		cout << pos << " " << max << endl;
		
		
		
	}
	return 0;
}
