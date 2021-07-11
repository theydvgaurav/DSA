#include <iostream>
using namespace std;

typedef union student
{
int Roll;
int Code;	
}St;
int main()
{
St Gaurav;
St Anuj;
St Deepak;

Gaurav.Roll=11911038;
Gaurav.Code=12;
Anuj.Roll=11911013;
Anuj.Code=13;
Deepak.Code=83;
Deepak.Roll=11911026;
cout<<".......Gaurav........"<<endl;
cout<<Gaurav.Roll<<endl;
cout<<Gaurav.Code<<endl;
cout<<".......Anuj........"<<endl;
cout<<Anuj.Roll<<endl;
cout<<Anuj.Code<<endl;
cout<<".......Deepak........"<<endl;
cout<<Deepak.Roll<<endl;
cout<<Deepak.Code<<endl;

return 0;
}