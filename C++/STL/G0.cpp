//Program to construct a weighted graph using vector
#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> g[1000];



int main()
{   int n,m;
    cin >> n >> m;
    for(int i=0; i<m ;i++)
    { 
        int a,b,w;
        cin >> a >> b >> w;
        g[a].push_back({b,w}); //curly wale se pair bnta hai
        g[b].push_back({a,w}); 

    }

    for(auto itr: g)
    {
        vector<pair<int,int>> v = itr;

        for(auto it: v)
            cout << it.first <<  "->" << it.second << " ";

        cout<<endl;

    }



    return 0;
}