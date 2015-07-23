#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

double box(int, int);

// The functio box calculates the max box volume possible

double box(int p, int s)
{
	// for max volume, the sides are a,a,b
	
	double del = sqrt(p*p-24*s);
	
	double a[2];
	double b[2];
	
	// two possible conditions. Answer is tha max of two volumes
	
	a[0] = (p+del)/12;
	a[1] = (p-del)/12;
	
	b[0] = (p-8*a[0])/4;
	b[1] = (p-8*a[1])/4;
	
	// Finding volume in each case
	
	double v1 = a[0]*a[0]*b[0];
	double v2 = a[1]*a[1]*b[1];
	
	// returning the max volume
	
	return v1>v2?v1:v2;
	
}

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int p, s;
		
		cin >> p;
		cin >> s;
		
		printf("%.2f\n", box(p,s));
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
