#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
int b[n];

for(int i=0;i<n;i++)
{
cin>>a[i];
}
int j=0;
int x=n-1;
for(int i=0;i<n;i++)
{
	if(a[i]==0)
	{
		b[j]=a[i];
		j++;
	}
	else if(a[i]==2)
	{
        b[x]=a[i];
        x--;
	}
    else 
    	continue;
	
}
for (int i = 0; i < n; ++i)
{
	if(a[i]==1)
	{
	b[j]=a[i];
	j++;
	}
}
for (int i = 0; i < n; ++i)
{
	cout<<b[i]<<" ";
}

return 0;
}