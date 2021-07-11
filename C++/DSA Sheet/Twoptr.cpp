//Program to find that whether sum of some (a[i],a[j]) equals a given number
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,x;
cin>>n>>x;
int a[n];
for (int i = 0; i < n; ++i)
{
	cin>>a[i];
}
sort(a,a+n);
int i=0;
int j=n-1;
while(i<j){
	if(a[i]+a[j]==x)
		{cout<<"found";
           break;}
	else if(a[i]+a[j]<x)
	        { i++;}
	else
		j--;
}

return 0;
}