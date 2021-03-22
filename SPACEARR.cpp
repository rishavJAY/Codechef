#include <bits/stdc++.h>    // Accepted
using namespace std;
#define ll long long 
int main()
{
    int t; cin>>t;
    while(t--){
        ll n,i,req=0,flag=0; cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++){
            if(a[i]<(i+1)){
                req += (i+1-a[i]);
            }
            if(a[i]>(i+1)){
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"Second"<<endl;
        else if(req==0)
            cout<<"Second"<<endl;
        else if(req%2==0)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
    }
    return 0;
}