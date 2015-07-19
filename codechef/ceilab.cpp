#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cin >> a;
	cin >>b;
	int correct_sub = a-b;
	int wrong_sub;
	int add_wrong_sub;
	// We need to print the wrong result that differs the correct result by exactly one digit
	
	// This would work unless the last digit is 9. Then on adding 2 digits change.
	add_wrong_sub = correct_sub + 1;
	// check if the last digit was 9
	if(add_wrong_sub%10==0)
	{
		wrong_sub = correct_sub - 1;
	}
	else
	{
		// Else it was right
		wrong_sub = add_wrong_sub;
	}
	
	cout << wrong_sub;
	
	return 0;
}
	 
	
	
