#include <iostream>
using namespace std;
struct school
{
 int Rank;
 int Fees;
};

typedef struct student
{
int Roll;
int Class;	
}St;
int main()
{
struct school PDM;
St Gaurav;

Gaurav.Roll=5;
Gaurav.Class=12;
PDM.Rank=1;
PDM.Fees=50000;
cout<<"PDM "<<endl;
cout<<PDM.Rank<<endl;
cout<<PDM.Fees<<endl;
cout<<".......Gaurav........"<<endl;
cout<<Gaurav.Roll<<endl;
cout<<Gaurav.Class<<endl;


return 0;
}