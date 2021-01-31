// Accepted
#include <bits/stdc++.h>
using namespace std;
int main(){
    // freopen("inp.txt", "r", stdin);
    // freopen("outp.txt", "w", stdout);
    int t;	cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i,n = s.length();
        if(n<10)
            cout<<"NO"<<endl;
        else
        {
            int f1=0,f2=0,f3=0,f4=0,f5=0;
            for(i=0;i<n;i++){
                if(s[i]>='a' && s[i]<='z')
                    f1=1;
                if(s[i]>='A' && s[i]<='Z' && i>0 && i<n-1)
                    f2=1;
                if(s[i]>='0' && s[i]<='9' && i>0 && i<n-1)
                    f3=1;
                if((s[i]=='#' || s[i]=='?' || s[i]=='%' || s[i]=='&' || s[i]=='@')
                     && (i>0 && i<n-1)){
                         f4=1;
                     }
            }
            if(f1==1 && f2==1 && f3==1 && f4==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;   
        }
    }
    return 0;
}