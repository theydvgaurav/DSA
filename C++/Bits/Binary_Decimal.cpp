//Program to change a binary number into decimal

#include<bits/stdc++.h>
using namespace std;

int dec_conv( int n){
    
    string s = to_string(n);
    int res = 0;
    int temp = pow(2,s.length()-1);
    
    for(int i = 0 ; i < s.length() ; i++){
        res += (s[i] - '0')*temp;
        temp /= 2;
    }
    
    
    return res;
    
}

int main(){
    int n;
    cin >> n;
    cout << dec_conv(n);
    
    return 0;
}
