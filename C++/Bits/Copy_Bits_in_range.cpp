// Copy set bits in a range
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    
    vector<int> V;
        
    for(int i = l-1 ; i <= r-1 ; i++ ){
        if(m & (1 << i))
            V.push_back(i);
    }
    
    
    for(int i = 0 ; i < V.size() ; i++){
       n = n | (1 << V[i]);
    }
    
    cout << n  ;
    
    return 0;
}
