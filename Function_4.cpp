#include <iostream>
using namespace std;

void input(int& cents);
void computeCoins(int coinValue, int& num, int& amountLeft); //Precondition: 0 < coinValue < 100; 0 <= amountLeft < 100.
void output(int change, int quarter, int dime, int penny);

int main()
{
  char Continue;
  do{
  int in;
  input(in);
  int Q = 0, D = 0, P = 0, left = in;

  computeCoins(25, Q, left);
  computeCoins(10, D, left);
  computeCoins(1, P, left);

  output(in, Q, D, P);

  cout<<"Continue? (y or Y to continue, all else terminates)"<<endl;
  cin>>Continue;
  }
  while (Continue == 'y' || Continue == 'Y');
  return 0;
}

void input(int& cents){
  cout<<"Enter number of cents (1-99) for change:"<<endl;
  cin>>cents;
  return;
}

void computeCoins(int coinValue, int& num, int& amountLeft){
  num = amountLeft / coinValue;
  amountLeft %= coinValue;
  return;
}

void output(int change, int quarter, int dime, int penny){
  cout<<change<<" cents can be given as ";
  cout<<quarter<<" Quarter(s) ";
  cout<<dime<<" Dime(s) and ";
  cout<<penny<<" penny(pennies)."<<endl;
  return;
}
