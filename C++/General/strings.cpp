#include<iostream>
#include<string>
using namespace std;
int main()
{ string s,a;
cin>>s>>a;
cout<<s.length()<<endl;
cout<<s+a<<endl;
cout<<s.append(a)<<endl;
cout<<s.compare(a)<<endl;
cout<<s.substr(0,3)<<endl;
return 0;
}