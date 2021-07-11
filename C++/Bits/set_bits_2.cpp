// Find the total number of set bits in a number using n&(n-1) method;
#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n , res = 0;
    cin >> n ;

    
    while(n){
        
        n = n&(n-1);
        res++;
        
    }
    
    cout << res;
    
    
    return 0;
}
