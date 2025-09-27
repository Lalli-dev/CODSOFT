#include <iostream>
using namespace std;
int main()
{
int range,a=0,b=1,fibonacci=0,c;
cout<<"Enter range for terms of Fibonacci Sequence:";
cin>>range;
cout<<"Fibonaaci series upto "<<range<<" terms"<<endl;
for(c=0;c<range;c++)
{
if(c<=1)
fibonacci=c;
else
{
fibonacci=a+b;
a=b;
b=fibonacci;
}
cout<<fibonacci<<" ";
}
return 0;
}		