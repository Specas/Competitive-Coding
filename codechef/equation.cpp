#include <iostream>
 
using namespace std;
 
int main() 
{
    int t, n, a, b, c;
    
    long long int ans;
    
    cin >> t;
    
    while(t--)
    {
        ans = 0;
        
        cin >> n >> a >> b >> c;
        
        for(int i=0; i<=a; i++)
        {
            for(int j=0; j<=b && (j+i) <= n; j++)
            {
                int x = n - i - j;
                if(x>=0)
                {
					 ans += min(x, c) + 1;
				 }
            }
        }
       cout << ans << endl;
    }
    return 0;
}
