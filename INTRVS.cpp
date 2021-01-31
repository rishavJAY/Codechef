// Accepted
#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("inp.txt", "r", stdin);
    // freopen("outp.txt", "w", stdout);
    int t;	cin>>t;
    while(t--){
        int n,k,f1=0,f2=0,i;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int x = ceil(n*1.0/2);
        int cnt=0;
        for(i=0;i<n;i++){
            if(a[i]>=0)
                cnt++;
            if(a[i]>1)
                f1=1;
            if(a[i]>k)
                f2=1;
        }
        
        if(cnt<x)
            cout<<"REJECTED"<<endl;
        else if(f2==1)
            cout<<"TOO SLOW"<<endl;
        else if(cnt==n && f1==0)
            cout<<"BOT"<<endl;
        else
            cout<<"ACCEPTED"<<endl;
    }
    return 0;
}