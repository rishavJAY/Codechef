#include <bits/stdc++.h>
using namespace std;-
int main(){
    // freopen("inp.txt", "r", stdin);
    // freopen("outp.txt", "w", stdout);
    int t;	cin>>t;
    while(t--){
        int n,m,i,j,sumA=0,sumB=0,diff=0,count=0,flag=0;
        cin>>n>>m;
        int a[n],b[m];
        for(i=0;i<n;i++){
            cin>>a[i];
            sumA+=a[i];
        }
        for(i=0;i<m;i++){
            cin>>b[i];
            sumB+=b[i];
        }
        if(sumA>sumB)
            cout<<0<<endl;
        else
        {
            // sort(a,a+n);
            int reqSum = ceil((sumB+sumA)*1.0/2);
            sort(b,b+m);
            i=0;    j=m-1;
            flag=0;
            while(i<n && j>=0){
                diff = b[j]-a[i];
                sumA+=diff;
                sumB-=diff;
                count++;
                if(sumA>sumB){
                    flag=1; break;
                }
                i++;    j--;
            }
            if(flag)
                cout<<count<<endl;
            else cout<<-1<<endl;
        } 
    }
    return 0;
}