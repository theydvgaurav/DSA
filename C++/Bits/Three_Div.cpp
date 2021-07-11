// Find whether a number is divisible by three or not
#include<bits/stdc++.h>
using namespace std;

void div_3(int n){
    int total = 0, even = 0, pos=0;
    int x = n;
   
    while(x){
       
       if( x & 1 )
           total++;
     
       if( (x&1) && !(pos % 2)){
        even++;
       }
       
       x = x >> 1;
       pos++;
    }
   
   
    int odd = abs(total - even);
   
    if(!(abs(odd - even) % 3))
        cout << "Yes";
    else
        cout << "No";
   
   
}

int main(){
    
    int n;
    cin >> n ;
    
    div_3(n) ;
    
    return 0;
}
