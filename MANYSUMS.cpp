// Accepted
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;	cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int mn = l+l;
        int mx = r+r;
        cout<<mx-mn+1<<endl;
    }
    return 0;
}