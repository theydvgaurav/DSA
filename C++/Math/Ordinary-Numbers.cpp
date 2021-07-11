#include <bits/stdc++.h>
 
using namespace std ;
 
#define ll  long long int



int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    cout.tie(0) ;
    
    ll t ;
    cin >> t ;
    while(t--)
    {   ll n ;
        cin >> n;
        string s = to_string(n);
        ll len = s.length();
        char ch = s[0];
        
        ll ans = (len-1)*9;
        
        ll d = s[0] - 48;
        ll dd = 0;
        ll x = 1 ;
        for(ll i = 0 ; i < len ; i++ ){
            dd = dd + d*x;
            x = x*10;
            // cout << x << "\n";
        }
        
        // cout << dd << "\n";
        
        if(n >= dd)
            ans = ans + d;
        else
            ans = ans + d - 1;
     cout << ans << "\n";
    }
    return 0 ;
}
