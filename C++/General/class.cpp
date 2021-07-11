#include <bits/stdc++.h>
using namespace std;

class Student{
public:
	int age;
	string Name;
	int Roll;
    void fun(){
        cout<<age<<" "<<Name<<" "<<Roll<<endl;
    }


};


int main()
{ Student Jy;
  Student GT;
  Jy.age=17;
  Jy.Name="JY";
  Jy.Roll=12345;
  GT.age=20;
  GT.Name="Gaurav";
  GT.Roll=11911038;
GT.fun();
Jy.fun();


return 0;
}