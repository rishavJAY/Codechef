// Accepted
#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("inp.txt", "r", stdin);
    // freopen("outp.txt", "w", stdout);
    int t;	cin>>t;
    while(t--){
        int n,i,sum=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum&1==1)
            cout<<2<<endl;
        else
        {
            cout<<1<<endl;
        }
        
    }
    return 0;
}