//Program to construct a weighted Graph using List
#include<bits/stdc++.h>
using namespace std;

list<pair<int,int>>  g[1000];

int main()
{   int N , M;
    cin >> N >> M;
    for(int i=0 ; i<M ; i++){
        int a , b , w;
        cin >> a >> b >> w; 
        g[a].push_back({b,w});
        g[b].push_back({a,w});
    }

    for(auto itr : g)
    {
        list<pair<int,int>> v = itr ;

        for(auto it : v)
        {
            cout << it.first << "->" << it.second << " ";
        }
        
        cout << "\n";

    }
    return 0;
}