#include <iostream>
using namespace std;

int main()
{
    double budget;
    string season;
    cin >> budget >> season;

    string destinacion, campOrHotel;
    double price;

    
    if(budget > 1000)
    {
        destinacion = "Europe";
        campOrHotel = "Hotel";
        price = budget * 0.9;
    }
    else if (season == "summer")
    {
        campOrHotel = "Camp";
        if(budget > 100)
        {
            destinacion = "Balkans";
            price = budget * 0.4;
        }
        else
        {
            destinacion = "Bulgaria";
            price = budget * 0.3;
        }
    }
    else if(season == "winter")
    {
        campOrHotel = "Hotel";
        if(budget > 100)
        {
            destinacion = "Balkans";
            price = budget * 0.8;
        }
        else
        {
            destinacion = "Bulgaria";
            price = budget * 0.7;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Somewhere in " << destinacion << endl;
    cout << campOrHotel << " - " << price << endl;
    
}