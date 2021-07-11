#include<bits/stdc++.h>
using namespace std;

vector<int> G[100];

template<typename T>

void BFS( T i )
{
    map<T,bool> v;
    queue<T> q;

    q.push(i);
    v[i] = true;

    while(!q.empty())
    { 
        T x = q.front();
        q.pop();

        for(auto it : G[x])
        {
            if(!v[it])
            { 
                q.push(it);
                v[it]=true;
            }
        }

        cout << x << " " ;
    }
    



}

int main()
{ 
    int V , E;
    cin >> V >> E;
    for(int i=0 ; i < E ; i++ )
    {
        int a , b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    } 
    
    for(int i =1 ;i <E ; i++)
    {   
        cout << i << " -> " ;
        
        for(auto it : G[i])
        {
            cout << it << " " ;
        }
        
        cout << endl;
    }

   cout << "BFS" << endl;
    BFS(1);
 

    return 0;
}