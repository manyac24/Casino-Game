#include <iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
void rules()
{
cout<<"\t WELCOME TO THE CASINO GAME\n\n";
cout<<"RULES OF THE GAME ARE: \n";
cout<<" 1. You have to chose a number between 1 and 10"<<endl;
cout<<" 2. If your number matches the casino number\n"<<"\tYOU WIN 10 TIMES THE MONEY BET"<<endl;
cout<<" 3. Wrong bet and you lose the amount you bet\n\n";
}
int main()
{
    string name;
    int amount,random,startbalance,number;
    char choice;
rules();
srand(time(0));
do
{
cout<<"Enter your name = ";
getline(cin,name);
cout<<"Enter the starting balance to play game = ";
cin>>startbalance;
int balance=startbalance;
while(balance>0)
{
cout<<"Enter the amount you want to bet = ";
cin>>amount;
if(amount>balance)
{
    cout<<"Your bet can't be greater than your balance"<<endl;
    break;
}
cout<<"Guess a no from 1 to 10 = ";
cin>>number;
if(number>10||number<1)
    cout<<"Invalid no";
else{
random =rand()%10 + 1;
cout<<"THE CASINO NO IS = "<<random<<endl;
if(random==number)
{ int x;
   cout<<" YAYYYY,YOU WIN"<<endl;
   x= 10*amount;
   cout<<"You won= "<< x;
   balance=balance+x;
   cout<<" Now,Your current balance is =" <<balance;
}
else{int y;
    cout<<"BAD LUCK,YOU LOST YOUR BET"<<endl;
    balance=balance-amount;
    cout<<" Now,Your current balance is =" <<balance<<endl;
}
if(balance==0)
{
    cout<<"\t\t GAME ENDED"<<endl;
}
}
cout<<"\n\n";
}
cout<< "Do you want to play again?(y/n)"<<endl;
cin>>choice;
cin.ignore();
}while(choice=='Y'||choice=='y');
}
