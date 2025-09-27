#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
srand(time(0));
char choice;
do
{
int number,guess=0,attempts=0;
number=rand()%100+1;
cout<<"\n Welcome to Guess the Number Game!"<<endl;
cout<<"I have chosen a number between 1 to 100. Try to guess it!:"<<endl;
while(guess!=number)
{
cout<<"Enter your Guess:";
cin>>guess;
attempts++;
if(guess<number)
{
cout<<"Too low!Try again\n";
}
else if(guess>number)
{
cout<<"Too high!Try again \n";
}
else
{
cout<<"Congratulations! You have guessed the number in\t"<<attempts<<" attempts.The number was "<<number<<"\n";
}
}
cout<<"\n Do you want to play the Game again? (Yes/No)";
cin>>choice;
}
while (choice=='y'||choice=='Y');
cout<<"Thanks for playing!"<<endl;
return 0;
}
