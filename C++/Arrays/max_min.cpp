#include<iostream>
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
 int min=0;
 int max=0;
 for(int i=0;i<n;i++)
 {
 if(a[i]>max)
 	{max=a[i];}
 if(a[i]<min)
 {min=a[i];}
 }

 cout<<"Max:"<<max<<endl;
 cout<<"Min:"<<min<<endl;
	return 0;
}