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

int b[n];
int j=0;
int x=n-1;
for (int i = 0; i < n; ++i)
{
	if(a[i]<0)
	{
		b[j]=a[i];
		j++;
	}
	else
	{
		b[x]=a[i];
		x--;
	}
}

for (int i = 0; i < n; ++i)
{
	cout<<b[i]<<" ";
}

return 0;
}