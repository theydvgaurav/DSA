// Creating and using List STL in cpp
#include<bits/stdc++.h>
using namespace std;

list<int> l;


int main()
{
    for( int i=0 ; i< 5 ; i++ )
    {   int a;
        cin >> a;
        l.push_back(a); 
    }

//{ 2 , 3 , 4 , 5 , 6 }

    for(auto itr : l)            // itr will automatically take values present in list l
    {
        cout << itr << " " ;
    }

    return 0;
}