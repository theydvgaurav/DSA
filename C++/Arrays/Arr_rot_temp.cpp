//Array rotation using temp array
#include<iostream>
using namespace std;
void rot(int a[], int x, int n)
{ int temp[x-1];
for(int i=0;i<x-1;i++)
{
temp[i]=a[i];
}

for(int i=0;i<n-x+1;i++)
{
a[i]=a[i+x-1];}

int j=0;
for(int i=n-x+1;i<n&&j<x-1;i++&&j++)
{
a[i]=temp[j];
}
cout<<"Output:"<<endl;
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}

}

int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
rot(a,3,7);

return 0;
}