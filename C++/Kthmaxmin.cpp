// kth max min

#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	vector<int> V;
    int x , k;
    
    cin >> k;
    
    while(cin >> x)
        V.push_back(x);
        
    // priority_queue< int, vector<int>, greater<int> > q;
    //  priority_queue< int > q;
     priority_queue< int > q;
    
    for(int i = 0 ; i < k  ; i++)
        q.push(V[i]);
    
    for(int i = k ; i < V.size() ; i++){
        q.push(V[i]);
        
        q.pop();
    }
    
    cout << q.top();
        
	return 0;
}