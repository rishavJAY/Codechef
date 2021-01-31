// Accepted
#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("inp.txt", "r", stdin);
    // freopen("outp.txt", "w", stdout);
    int t;	cin>>t;
    while(t--){
        int n,i,k,val=0;  cin>>n;
        string s,ans="";
        cin>>s;
        for (i = 0; i < n; i++)
        {
            k=3;    val=0;
            while(i%4!=3){
                val+=(s[i]-48)*pow(2,k);
                k--;
                i++;
            }
            val+=(s[i]-48)*pow(2,k);
            ans+=(char(97+val));
        }
        cout<<ans<<endl;
        
    }
    return 0;
}