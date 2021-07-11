#include <iostream>
using namespace std;
int n=20;
int main()
{
int n=2;
cout<<"Local n: "<<n<<endl;
cout<<"Global n without :: "<<n<<endl;
cout<<"Global n with :: "<<::n<<endl;
return 0;
}