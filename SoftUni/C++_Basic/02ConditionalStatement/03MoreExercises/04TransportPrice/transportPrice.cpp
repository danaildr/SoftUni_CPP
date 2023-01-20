#include <iostream>

using namespace std;

int main()
{
   int kmTrip;
   cin >> kmTrip;
   
   string dayOrNight;
   cin >> dayOrNight;
   
   double price;
   
   
   if (kmTrip >= 100)
   {
       price = kmTrip * 0.06;
   }
   else if (kmTrip <100 and kmTrip >=20)
   {
       price = kmTrip * 0.09;
   }
   else
   {
       if (dayOrNight == "day")
       {
           price = kmTrip * 0.79 + 0.70;
       }
       else if (dayOrNight == "night")
       {
           price = kmTrip * 0.90 + 0.70;
       }
   }
   
   cout.setf(ios::fixed);
   cout.precision(2);
   
   cout << price << endl;
  
}