#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll fun(ll a1, ll a2, ll b1, ll b2, ll f1, ll f2 ){
    
    ll res = 0;
    
    if( ((a1 == b1 && b1 == f1) && ( (a2 > f2 && f2 > b2) || (a2 < f2 && f2 < b2) )) || ((a2 == b2 && b2 == f2) && ( (a1 < f1 && f1 < b1) || (a1 > f1 && f1 > b1) ))  )
        res = abs( b1 - a1) + abs( b2 - a2) + 2;
    else{
        res = abs( b1 - a1) + abs( b2 - a2);
    }
    
    
    return res;
        
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    
    while(t--){
     
     ll a1, a2, b1, b2, f1, f2;
     cin >> a1 >> a2 >> b1 >> b2 >> f1 >> f2;
     cout << fun(a1, a2, b1, b2, f1, f2) << "\n"; 
    }

	return 0;
}