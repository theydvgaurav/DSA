#include<iostream>
using namespace std;
int main()
{
int *a;
int arr[]={4,6};
int bb[4];
for(int i=0;i<4;i++)
{cin>>bb[i];}
a=arr;
cout<<"....................................."<<endl;
cout<<"Pointer to an Array or array pointers"<<endl;
cout<<*(a+1)<<endl;

int *b;
b= bb;
int (*c)[2];
int cc[]={12,13};
c=&cc;
cout<<*(c+1)<<endl;
cout<<*(*c+1)<<endl;
cout<<*(b+2)<<endl;
cout<<b<<endl;
cout<<"Array of pointers or  pointer array "<<endl;
int *sb[2];
sb[0]=&bb[0];
sb[1]=&bb[1];
cout<<*sb[0]<<*(*(sb+1));
return 0;
}


