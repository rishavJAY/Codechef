#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("inp.txt", "r", stdin);
    // freopen("outp.txt", "w", stdout);
    int t; cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x+y==z)
            cout<<"YES"<<endl;
        else if(x+z==y)
            cout<<"YES"<<endl;
        else if(y+z==x)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}