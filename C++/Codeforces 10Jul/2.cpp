#include <bits/stdc++.h>
using namespace std;

#define ll long long int

string fun(string s){
    string res = "YES";
    string a ="abcdefghijklmnopqrstuvwxyz";
    
    ll n = s.length();
    
    map<char , int> mp;
    
    for(auto it : a)
        mp.insert({ it, 0 });
    
    for(auto it : s)
        mp[it]++;
        
    for(auto it : mp){
        if(it.second > 1)
            return "NO";
    }
    
    for(int i = 0 ; i < s.length() ; i++){
        char it = a[i];
        if(mp[it] < 1)
            return "NO";
    }
    
    for(int i = 0 ; i < s.length() - 1 ; i++){
        int pos1 = s.find(a[i]);
        int pos2 = s.find(a[i+1]);
        
        if( !((abs(pos1 - pos2) == 1) || ( abs(pos1 - pos2) == i+1 )) )
            return "NO";
    }
    
    
    return res;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    
    while(t--){
     
     string s;
     cin >> s;
     
     cout << fun(s) << "\n";
     
    }

	return 0;
}