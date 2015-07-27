#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	long long int a;
	cin >> a;
	
	long long int rem = a%6;
	
	if((rem==0)||(rem==1)||(rem==3))
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
	
	return 0;
	
	
}
