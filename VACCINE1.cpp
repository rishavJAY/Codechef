#include <iostream>
using namespace std;
int main()
{
	int d1,v1,d2,v2,p,ans=0,cnt=0;
	cin>>d1>>v1>>d2>>v2>>p;

	cnt=min(d1,d2)-1;
	while(ans<p)
	{
	    if(d1>d2)
	    {
	        ans+=v2;   d2++;
        }
        else if(d2>d1)
        {
            ans+=v1;   d1++;
        }
        else{
            ans+=(v1+v2);   
        }
        cnt++;
    }
    cout<<cnt;
	return 0;
}

