#include <bits/stdc++.h>    //Accepted
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, e, h, a, b, c;
        cin >> n >> e >> h >> a >> b >> c;
        int qTot=0, e1, h1, price = 0;
        int ans = INT64_MAX, om, milk, cake = min(e,h);
        e1 = e; h1 = h;
        for(i=cake;i>=0;i--){
            price = 0;
            if(i>=n){
                price = n*c;
                ans = min(price, ans);
                continue;
            }
            e = e1; h = h1;
            int req = n-i; 
            e = e - i;
            h = h - i;
            price += i*c;
            if(a<b){
                om = min(req, e/2);
                req = req-om;
                milk = min(req, h/3);
                req -= milk;
                if(req == 0)
                {
                    price += a*om + milk*b;
                    ans = min(price, ans);
                    continue;
                }
            }
            else{
                milk = min(req, h/3);
                req = req-milk;
                om = min(req, e/2);
                req -= om;
                if(req == 0)
                {
                    price += a*om + milk*b;
                    ans = min(price, ans);
                    continue;
                }
            }
        }
        if(ans==INT64_MAX) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}