//Program to construct a graph using vector
#include<bits/stdc++.h>
using namespace std;
 
vector<int> g[100];  // g is a collection of vectors 

int main()
{   int n , m ;
    cin >> n >> m ;
    for(int i=0 ; i<m ; i++)
    {
        int a , b ;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);

    }

    for(auto itr : g) 
    {
        vector<int> v = itr;
        
        for(auto it : v)
        {
            cout << it << " ";
        }

        cout<< endl;
    }
    return 0;
}