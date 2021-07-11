#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n,x;
 cin>>n>>x;
 int a[n];
 for(int i=0;i<n;i++)
 {
 cin>>a[i];
 }
 sort(a,a+n);
 int l,u,mid;
 l=0;
 u=n-1;
 while(l<u)
 { mid=(l+u)/2;
 	if(x<a[mid])
 	{
 		u=mid;
 	}
 	else if(x>a[mid])
 	{
 	    l=mid;
 	}
    else if(a[mid]==x)
    {cout<<"Element found at Index : "<<mid;
        break;}
    else
    	cout<<"Element not found";
 }

	return 0;
}