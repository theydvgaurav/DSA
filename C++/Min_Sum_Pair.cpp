#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    int min =INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(a[i] < min)
            min = a[i];
    }

    

    int min2 = INT_MAX;
    for(int  i = 0 ; i < n ; i++){
        if((a[i] != min) && (a[i] < min2))
            min2 = a[i];
            
    }



    int sum = min2 + min;

    cout << sum; 
    
    return 0;
}