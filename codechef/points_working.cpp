#include <iostream>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
 
bool comp(pair<int,int> a,pair<int,int> b)
{
	if(a.first==b.first)
		return (a.second>=b.second);
	else
		return (a.first<b.first);
}
 
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		pair<int,int> a[1000000];
		for(int i=0;i<n;i++)
		{
			cin>>a[i].first;
			cin>>a[i].second;
		}
		sort(a,a+n,comp);
		double d=0;
		for(int i=0;i<n-1;i++)
		{
			int x1 = a[i].first;
			int x2 = a[i+1].first;
			int y1  = a[i].second;
			int y2= a[i+1].second;
			int r = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);

			d+= sqrt(r);
		}
 
		cout << setprecision(2) << fixed <<  d << '\n';
	}
	
}
 
