//Array rotation using a temp variable
#include<iostream>
using namespace std;

void rot(int a[],int x, int n)
{
    int temp;
    for (int i = 0; i < x-1; i++)
    { temp=a[0];

      for(int j=0; j<n-1;j++)
        {
        a[j]=a[j+1];
        }
    a[n-x+1+1]=temp;
    }
    cout<<"Output: ";
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
int x;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cin>>x;
rot(a,x,n);
return 0;
}