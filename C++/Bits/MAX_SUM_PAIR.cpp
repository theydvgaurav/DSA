#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    int max = 0;

    for(int i = 0 ; i < n ; i++){
        if(a[i] > max)
            max = a[i];
    }

    // cout << max << "\n";

    int max_xor = max;
    for(int  i = 0 ; i < n ; i++){
        if((a[i] != max) && (max^a[i] > max_xor))
            max_xor = max^a[i];
    }

    //  cout << max_xor << "\n";

    int max2 = max_xor^max ;

    int sum = max2 + max;

    cout << sum; 
    
    return 0;
}