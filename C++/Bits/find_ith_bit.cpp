#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, i;
	cin >> n >> i;
	int mask = 1 << i;
	if( n & mask){
		cout << 1;
	}
	else
		cout << 0;
 
	return 0;
}
