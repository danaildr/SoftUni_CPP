#include <iostream>
using namespace std;

int main()
{
    double budget;
    string season;
    cin >> budget >> season;
    
    double price;
    string carClass, carType;
    
    if (budget <= 100)
    {
        carClass = "Economy class";
        if (season == "Summer")
        {
            carType = "Cabrio";
            price = budget * 0.35;
        }
        else if(season == "Winter")
        {
            carType = "Jeep";
            price = budget * 0.65;
        }
    }
    else if(budget > 100 && budget <= 500)
    {
        carClass = "Compact class";
        if (season == "Summer")
        {
            carType = "Cabrio";
            price = budget * 0.45;
        }
        else if(season == "Winter")
        {
            carType = "Jeep";
            price = budget * 0.8;
        }
    }
    else
    {
        carClass = "Luxury class";
        carType = "Jeep";
        price = budget * 0.9;
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << carClass << endl;
    cout << carType << " - " << price << endl;
}