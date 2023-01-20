#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int area, needLiterOfWine, workers;
   double kgGrapesPerSquareMeter;
   
   cin >> area >> kgGrapesPerSquareMeter >> needLiterOfWine >> workers;
   
   double harvestKg = area * kgGrapesPerSquareMeter; 
   double harvestKgForWine = harvestKg * 0.4 ;
   double wineProduction = harvestKgForWine / 2.5 ;
   
   if ( wineProduction < needLiterOfWine)
   {
       cout << "It will be a tough winter! More "<< floor(needLiterOfWine - wineProduction) <<" liters wine needed." << endl;
   }
   else
   {
       cout << "Good harvest this year! Total wine: " << floor(wineProduction) <<" liters." << endl;
       cout << ceil(wineProduction - needLiterOfWine) <<" liters left -> " << ceil((wineProduction - needLiterOfWine) / workers) <<" liters per person." << endl;
   }
    
}