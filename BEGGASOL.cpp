#include <iostream>
using namespace std;
int main()
{
    // freopen("inp1.txt", "r", stdin);
	// freopen("outp1.txt", "w", stdout);
    int t; cin>>t;
    while(t--)
    {
        int n,i,ans=0,ans2=0,flag=0;
         cin>>n;
        int a[n+1];
        for (i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        ans=a[1];   ans2=a[1];
        if(ans==0)  cout<<0<<endl;
        else
        {
            for (i = 2; i <= n; i++)
            {
                ans--;
                ans+=a[i];
                ans2+=a[i];
                if(ans==0)
                    break;
            }
            cout<<ans2<<endl;
        }      
    }
    return 0;
}