#include <iostream>
#include <set>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		// The required answer is the number of unique elements in the array. So we use a set
		
		set<int> unique_numbers;
		
		for(int i=0;i<n;i++)
		{
			int num;
			cin >> num;
			
			unique_numbers.insert(num);
		}
		
		// answer is the length of the set
		
		cout << unique_numbers.size() << endl;
	}
	
	return 0;
}
		
			
