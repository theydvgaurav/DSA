#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int x=0;
int temp=0;
for (int i = 0; i < n && i!=n-1; i=i+0)
{
	if(a[i]==0)
	{x=x+1;
	    continue;}
x=x+a[i];
i=x;
temp=temp+1;
}
cout<<temp;

return 0;
}