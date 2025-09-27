#include<iostream>
using namespace std;
int main()
{
float a,b;
char num;
char choice;
do
{
cout<<"Simple Calculator \n";
cout<<"Enter first number:";
cin>>a;
cout<<"\nEnter second number:";
cin>>b;
cout<<"\nChoose a number(1,2,3,4):";
cin>>num;
switch(num)
{
case '1':
cout<<"Result: "<<a+b<<endl;
break;
case '2':
cout<<"Result: "<<a-b<<endl;
break;
case '3':
cout<<"Result: "<<a*b<<endl;
break;
case '4':
if(b!=0)
cout<<"Result: "<<a/b<<endl;
else
cout<<"Error!"<<endl;
break;
default:
cout<<"Invalid number!"<<endl;
}
cout<<"Do you want to perform another calculation?(Yes/No):";
cin>>choice;
cout<<"\n";
}
while (choice=='y'||choice=='Y');
cout<<"Thanks for using the calculator!"<<endl;
}
