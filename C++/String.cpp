//aabcdeef

//abc bcd cde


#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	string s;
	int k;
	cin >> s >> k;

	int res = 0 ;

	unordered_map<char,int> mp;
	
	for( int i = 0 ; i < k ; i++){
	    mp[s[i]]++;
	}
	
	if(mp.size() == k)
	    res++;

	for(int  i = k ; i < s.length()  ; i++){
		
		mp[s[i]]++;
        mp[s[i-k]]--;
        
        if(!mp[s[i-k]])
            mp.erase(s[i-k]);
            
		if(mp.size()==k)
			res++;
        
        
	
	}

	cout << res ;

	return 0;
}