#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    
    while(t--){
     vector<ll> N;
     vector<ll> M;
     
     ll k, m, n;
     cin >> k >> n >> m;
     
     ll temp = k;
     
     for( ll i = 0 ; i < n ; i++){
         ll x;
         cin >> x;
         N.push_back(x);
     }
     
     for( ll i = 0 ; i < m ; i++){
         ll x;
         cin >> x;
         M.push_back(x);
     }
     
     ll z1 = 0 , z2 = 0 ; 
     ll max1 = -1, max2 = -1 ; 
     
     for( auto it : N){
         if(!it)
            z1++;
         if(max1 < it)
            max1 = it;
        // cout << it << " ";
     }
     
     for( auto it : M){
         if(!it)
            z2++;
         if(max2 < it)
            max2 = it;
        // cout << it << " ";
     }
     
     if(max(max1,max2) > temp + z1 + z2)
     {
         cout << -1;
     }
     else{
         vector<ll> V;
         vector<ll> a;
         ll lines  = k;
         ll z = z1 + z2;
         
         for(auto it : N){
             a.push_back(it);
         }
         for(auto it : M){
            a.push_back(it);
         }
         
         for(int  i = 0 ; i < n+m ; i++){
             cout << a[i] << " ";
         }
        
        for(ll i = 0 ; i < n+m ; i++ ){
            if(!a[i]){
                //
            }
            else{
                if(a[i] <= lines)
                  V.push_back(a[i]);
                else{
                    ll x = a[i] - lines;
                    while(x && z > 0 ){
                        int j = 0 ;
                        V.push_back(j);
                        z--;
                        x--;
                    }
                    V.push_back(a[i]);}
            }
            
            
        } 
        
        for(auto it : V)
            cout << it << " ";
     }
     
     cout << "\n";
     
    }

	return 0;
}