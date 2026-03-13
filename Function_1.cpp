#include <iostream>
#include <cstdlib>
using namespace std;

void CoinFlip();

int main() {
   int in;
   
   srand(2);  // Unique seed

   cout<<"Enter Number of Coin Flips: "<<endl;
   cin>>in;

   for (int i = 0; i < in; i++)
      CoinFlip();

   cout<<endl;
   return 0;
}

void CoinFlip(){
   bool Heads = (rand() % 2) == 1;
   if (Heads)
      cout<<"Heads ";
   else
      cout<<"Tails ";
   return;
}
