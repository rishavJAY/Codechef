#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	// freopen("inp1.txt", "r", stdin);
	// freopen("outp1.txt", "w", stdout);
	int t; cin>>t;
	while(t--)
	{
	    long long int a,b;
	    cin>>a>>b;
	    long long int x,y;
	    x=a/2;
	    y=b/2;
	    cout<<(x*y)+(a-x)*(b-y)<<endl;
	}
	return 0;
}

