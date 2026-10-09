#include <iostream>
using namespace std;

double FindMenuPrice(int attendees) 
{
   double menu_price = 0;
   if(attendees < 200)
   {
      menu_price = 80;
   }
   else if(attendees <=475)
   {
      menu_price = 60;
   }
   else
   {
      menu_price = 41;
   }
   return menu_price;
}

int main() {
   int numberOfPeople;

   cin >> numberOfPeople;

   cout << FindMenuPrice(numberOfPeople) << endl;

   return 0;
}
