// Accepted
#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("inp.txt", "r", stdin);
    // freopen("outp.txt", "w", stdout);
    int t;	cin>>t;
    while(t--){
        int n,k,x,y,rem;
        cin>>n>>k>>x>>y;
        if(x==y){
            cout<<n<<" "<<n<<endl;
        }
        else if(y<x){
            rem=k%4;
            if(rem==1){
                cout<<n<<" "<<y+n-x<<endl;
            }
            else if(rem==2){
                cout<<y+n-x<<" "<<n<<endl;
            }
            else if(rem==3){
                cout<<0<<" "<<x-y<<endl;
            }
            else if(rem==0){
                cout<<x-y<<" "<<0<<endl;
            }
        }
        else if(y>x){
            rem=k%4;
            if(rem==1){
                cout<<x+n-y<<" "<<n<<endl;
            }
            else if(rem==2){
                cout<<n<<" "<<x+n-y<<endl;
            }
            else if(rem==3){
                cout<<y-x<<" "<<0<<endl;
            }
            else if(rem==0){
                cout<<0<<" "<<y-x<<endl;
            }
        }
    }
    return 0;
}