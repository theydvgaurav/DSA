#include <bits/stdc++.h>
using namespace std;
int main()
{   int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<x<<"th min : "<<a[x-1]<<"\n";
	cout<<x<<"th max : "<<a[n-x]<<"\n"; 

return 0;
}