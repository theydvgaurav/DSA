//program for array reversal
#include<iostream>
using namespace std;

void rev(int arr[],int start,int end,int n)
{
while(start<end)
{
int temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
end--;
start++;
}

for(int i=0;i<n;i++)
{
cout<<arr[i]<<"";
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
int start,end;
cin>>start>>end;
rev(a,start,end,n);
return 0;
}