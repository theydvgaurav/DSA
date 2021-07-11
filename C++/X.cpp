#include <bits/stdc++.h>
 
using namespace std ;
#define ll long long int

signed main(){
  	ios_base::sync_with_stdio(false) ;
  	cin.tie(0) ;
  	cout.tie(0) ;
  	
  	int t ;
  	cin >> t ;
  	while(t--){
  	    string s ;
  	    cin >> s ;
  	    int a[26]={0};
  	    
  	    for(int i=0; i<s.length(); i++)
  	        a[s[i]-'a']++ ;
  	        
  	    int even=0, odd=0 ;
  	    
  	    for(int i=0; i<26; i++){
  	        if(a[i]==1)
  	            odd++ ;
  	        if(a[i] && a[i]%2==0)
  	  
int t ;
  	cin >> t ;
  	while(t--){
  	    string s ;
  	    cin >> s ;
  	    int a[26]={0};
  	    
  	    for(int i=0; i<s.length(); i++)
  	        a[s[i]-'a']++ ;
  	        
  	    int even=0, odd=0 ;
  	    
  	    for(int i=0; i<26; i++){
  	        if(a[i]==1)
  	            odd++ ;
  	        if(a[i] && a[i]%2==0)
  	            even += (a[i]/2) ;
  	        if(a[i] && a[i]>1 && a[i]%2==1)
  	            even += (a[i]-3)/2;
  	    }
  	    
  	    (odd>even) ? cout << "NO\n" : cout <<"YES\n" ;