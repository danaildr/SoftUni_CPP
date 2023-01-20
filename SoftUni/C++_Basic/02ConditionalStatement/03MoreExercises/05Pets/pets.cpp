#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int days, kgFood;
    double foodForDogPerDayInKg, foodForCatPerDayInKg, foodForTortoisePerDayInGrams;
    
    cin >> days >> kgFood >> foodForDogPerDayInKg >> foodForCatPerDayInKg >> foodForTortoisePerDayInGrams;

    double finalFood = days * (foodForCatPerDayInKg + foodForDogPerDayInKg + (foodForTortoisePerDayInGrams / 1000));
    
    if(kgFood >= finalFood)
    {
        cout << floor(kgFood - finalFood) << " kilos of food left." << endl;
    }
    else
    {
        cout << ceil(finalFood - kgFood) << " more kilos of food are needed." << endl;
    }
    
}