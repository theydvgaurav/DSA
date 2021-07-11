#include<iostream>
using namespace std;
int main()
{
int a=20;
int & v = a;
cout<<"a "<<a<<endl;
cout<<"v "<<v<<endl;
cout<<"v+=3"<<endl;
v+=3;
cout<<"a "<<a<<endl;
cout<<"v "<<v<<endl;
cout<<"v+=100"<<endl;
a+=100;
cout<<"a "<<a<<endl;
cout<<"v "<<v<<endl;
	return 0;
}