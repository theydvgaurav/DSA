// Program to construct a graph using List
#include<bits/stdc++.h>
using namespace std;

list<int> g[1000];



int main()
{   int n,m;
    cin >> n >> m;
    for(int i=0; i<6 ;i++)
    { 
        int a,b;
        cin >> a >> b ;
        g[a].push_back(b); //curly wale se pair bnta hai
        g[b].push_back(a); 

    }
    /*
    for(auto itr : g)
    {
        list<int> v : itr;
      

        for(auto it: v)
            cout << it << " " ;

        cout<<endl;

    }
    */
    for(int i = 1; i<6 ; i++ )
    {
        cout << i << "->" ;
      

        for(auto it: g[i])
            cout << it << " " ;

        cout<<endl;

    }



    return 0;
}