#include<iostream>
using namespace std;

void toh(int n, char from, char to, char aux )
{
if(n==1)
{
cout<<"Move disk 1 from "<<from<<" to "<<to<<endl;
return;
}
toh(n-1,from,aux,to);
cout<<"Move disk "<<n<<" from "<<from<<" to "<<to<<endl;
toh(n-1,aux,to,from);

}

int main()
{
int n;
cout<<"Enter the Number of disks:";
cin>>n;
if(n<=0)
{
cout<<"You've not entered a valid value"<<endl;
cout<<"Exiting....."<<endl;
return -1;
}
else
{toh(n,'A','C','B');
return 0;}
}