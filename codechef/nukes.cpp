#include <iostream>

using namespace std;

int main()
{
	int a, n, k;
	cin >> a;
	cin >> n;
	cin >> k;
	
	// For the first reactor, 'a' particles reach. Hence the resulting number of particles at the end is a%(n+1)
	// For the subsequent reactors, aprev/(n+1) particles reach and by taking mod, we get the resulting particles at the end
	
	int particles = a;
	
	for(int i=0;i<k;i++)
	{
		cout << particles%(n+1) << " ";
		
		// for next reactor
		particles = particles/(n+1);
	}
	
	return 0;
}
