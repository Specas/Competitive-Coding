#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,c,q;
		cin >> n >> c >> q;
		
		while(q--)
		{
			int a,b; // left and right
			cin >> a >> b;
			
			if((a<=c)&&(b>=c))
			{
			
			int seg_length = b-a+1; // length of the segment a-b
				int left_dist = c - a; // distance from l
				int right_dist = seg_length - left_dist - 1; // distance from right
				
				// When the segment is reversed, the distance from right and left get interchanged.
				// Thus we can obtain the new position of c
				
				c = c + right_dist - left_dist;
			}
			
			
		}
		
		cout << c << endl;
	}
	return 0;
}
