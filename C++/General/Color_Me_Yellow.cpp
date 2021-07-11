//CodeChef Color_Me_Yellow Problem
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

bool fun_check( ll mid , ll r, ll g, ll b){
    if(r>=mid && b>=mid && ((r+g+b-2*mid)>=mid))
        return true;
        
    return false;

}

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n , r, g, b;
        cin >> n >> r >> g >> b;
        ll ans = 0;
        ll low = 0;
        ll high = min(n,min(r,b));
        while(low<=high){
            ll mid = (low+high)/2;
            if(fun_check(mid,r,g,b)){
                ans  = mid;
                low = mid+1;
            }
            else
                high = mid-1;
        }
        cout << ans << "\n";
    }
    return 0;
}
