//Program to change a decimal number into binary

#include<bits/stdc++.h>
using namespace std;

int binary_conv( int n){
    string s = "";
    int temp = n;
    while(temp > 1){
        
        if(temp%2==0){
            temp /= 2;
            s += '0'; 
        }
        
        else{
            temp /= 2;
            s += '1';
        }
        
    }
    
    s += '1';
    
    temp = pow(10,s.length()-1);
    
    
    int res = 0;
    
    for(int i =  s.length() - 1 ; i >=0 ; i--){
        res += (s[i]-'0')*temp;
        temp /= 10;
        
    }
    
    return res;
    
}

int main(){
    int n;
    cin >> n;
    cout << binary_conv(n);
    
    return 0;
}
