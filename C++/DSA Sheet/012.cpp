#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; ++i)
{
	cin>>a[i];
}
int x=0;
int y=0;
int z=0;
 for(int i=0;i<n;i++)
 {
 if(a[i]==0)
 {
 	x=x+1;
 }
 else if(a[i]==1)
 {
 	y=y+1;
 }
 else if(a[i]==2)
 {
 	z=z+1;
 }
 }
for(int i=0;i<n;i++)
{
if(i<x)
	{a[i]=0;
	}
else if((x-1)<i && i<x+y)
	{
		a[i]=1;
	}
else if(i>=y+x)
		a[i]=2;
}

for(int i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
return 0;
}