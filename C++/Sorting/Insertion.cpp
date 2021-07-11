#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int  i = 0 ; i < n ; i++)
        cin >> a[i];
    
    for(int i = 1 ; i < n; i++){
        int key = a[i];
        int pos = i;

        while(pos>0 && a[pos-1] > key){
            a[pos] = a[pos-1];
            pos--;
        }
            a[pos] = key;
        }
    
    for(int  i = 0 ; i < n ; i++)
        cout << a[i];

    return 0;
}