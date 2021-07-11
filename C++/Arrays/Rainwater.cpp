#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    int a[n];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    
    int b[n], c[n];
    int max = a[0];

    for(int i = 0 ; i < n; i++ ){
            if(a[i] > max)
                max = a[i];
            b[i] = max;
    }

    max = a[n-1];
    for(int i = n-1 ; i >= 0; i-- ){
            if(a[i] > max)
                max = a[i];
            c[i] = max;
    }


    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += min( b[i], c[i]) - a[i];
    }
    
    cout << sum;
    
    return 0;
}