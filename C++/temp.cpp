#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(!b)
		return a;
	else
		return gcd( b, a%b );
}

int main(){
	int n, m;
	cin >> n >> m;
	cout << gcd(n,m);

	return 0;
}
