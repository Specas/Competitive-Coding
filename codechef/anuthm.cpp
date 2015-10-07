#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		
		// sum of probabilities at each diagonal = 1. Hence the answer is the number of diagonals (/ --> direction of diagonal) = n+m-1
		
		cout << std::setprecision(6) << fixed << (n+m-1.0) << endl;
	}
}
