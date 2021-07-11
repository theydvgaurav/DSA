#include<bits/stdc++.h>
using namespace std;

int fun(vector<int> &a , int n){
    
    vector<int> V(2);
    
    int x = 0;
    
    for(auto it : a)
        x = x^it;
    
    int temp = x, count = 0;
    
    
    while(temp){
        if(temp&1)
            break;
        
        temp = temp >> 1;
        count++;
    }
    
    
    temp = x;
    
    for(auto it : a ){
        
        if(it & (1 << count))
        {  
            temp = temp^it;
        }
    }
    

    
    V[0] = temp;
    V[1] = x^temp;
    
    sort(V.begin() , V.end());
    
    for(auto it : V)
        cout << it << " ";
    
}



 int main(){
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    
    for(int i = 0 ; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
        
    }
        
    fun(a,n);
    
    return 0;
}
