#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> V(n);
    for(int i = 0 ; i < n ; i++)
        cin >> V[i];
    
    int max = 0 ; 
    for(int i = 0 ; i < n ; i++){
        if( V[i] > max )
            max  = V[i];
     }
  
    int max2 = 0;
    
    for(auto it : V){
        if( (it != max) && ( it > max2 ) ){
            max2 = it;
            }
     }
    
    int max3 = 0;
    
    for(auto it : V){
        if( (it != max) && (it != max2) && ( it > max3 ) ){
            max3 = it;
            }
     }

    int sum = max + max2 + max3;
    
    cout << sum;   
        

    return 0;
}
