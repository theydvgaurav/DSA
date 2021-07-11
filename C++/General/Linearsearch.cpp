#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,key;
    cin>>n>>key;
    int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	
	for(int i=0;i<n;i++)
	{
	if(key==a[i])
		{ cout<<"Element found at Index : "<<i;
          break;}
	else
		continue;
	}
	return 0;
}