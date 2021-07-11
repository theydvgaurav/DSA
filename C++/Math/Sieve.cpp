#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<bool> v(n+1,true);
    v[0] = v[1] = false;
    
    for( int i = 2 ; i*i <= n ; i++ )
    {   
        if(v[i])
        {
           for(int j = 2 * i ; j <= n ; j+=i  ) 
           {
               v[j]=false;
           }
        }
    }
    
    for(int i = 0 ; i <n+1 ; i++)
    {
        if(v[i])
        {
            cout << i << " ";
        }
    }
    
	return 0;
}
