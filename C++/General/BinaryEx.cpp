// Binary Exponentiation Algo Implementation Program
#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll pow(ll a , ll b)
{
    if(b==0)
    {
        return 1;
    }

    ll r = pow(a,b/2);
    if(b%2)
    {
        return r*r*a;
    }
    else
        return r*r;

}

int main()
{
    int a , b ;
    cin >> a >> b;
    cout << pow(a,b);
    return 0;
}