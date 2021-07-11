// Creating and using Vector STL in cpp
#include<bits/stdc++.h>
using namespace std;

vector<int> v;

//pair<pair<int,int>,pair<int,int>> p = { { 1 , 2 } ,  { 2 , 3 } } ;
// 1 : p.first.first
// 3 : p.second.second

int main()
{
    for( int i=0 ; i< 5 ; i++ )
    {   int a;
        cin >> a;
        v.push_back(a); // v.emplace_back(a);
    }

//{ 2 , 3 , 4 , 5 , 6 }

    for(auto itr : v)            // itr will automatically take values present in vector v
    {
        cout << itr << " " ;
    }

    return 0;
}