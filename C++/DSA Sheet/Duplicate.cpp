#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n+1];
for(int i=0;i<n+1;i++)
{
	cin>>a[i];
}
  sort(a,a+n+1);

 for(int i=0;i<n+1;i++)
 {
 	if(a[i]==a[i+1])
 	{
 	cout<<"Duplicate Number is : "<<a[i];
 	break;
 	}
 	else
 		continue;
 }
return 0;
}