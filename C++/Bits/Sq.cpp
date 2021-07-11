// Find square using bitwise operators
#include<bits/stdc++.h>
using namespace std;

int sq(int n){
    if(n == 0)
        return 0;
    if(n < 0)
        n = -n;
    
    int x = n >> 1;
    
    if(!(n&1))
        return (sq(x) << 2);
    else{
        return ((sq(x) << 2) + (x << 2) + 1);
    }
        
    
        
        
}

int main(){
    
    int n;
    cin >> n ;
    
    cout << sq(n) ;
    
    return 0;
}
