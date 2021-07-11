// Find the total number of set bits in a number using right shift method;
#include<bits/stdc++.h>
using namespace std;

bool check (int N, int i)
{
    if( N & (1 << i) )
        return 1;
    else
        return 0;
}

int main(){
    
    int n , i = 0;
    cin >> n ;
    
    int res = 0;
    
    while(n){
        
        if(check(n,i)){
            res++;
        };
        
        n = n >> 1;
        
    }
    
    cout << res;
    
    
    return 0;
}
