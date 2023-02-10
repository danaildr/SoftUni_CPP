#include <iostream>
using namespace std;

int main()
{
    double budget, price;
    string season;
    cin >> budget >> season;
    string campNutOrHotel, location;
    
    if(budget <= 1000)
    {
        campNutOrHotel = "Camp";
        if(season == "Summer")
        {
            location = "Alaska";
            price = 0.65 * budget;
        }
        else if(season =="Winter")
        {
            location = "Morocco";
            price = 0.45 * budget;
        }
    }
    else if(budget >100 && budget <= 3000)
    {
        campNutOrHotel = "Hut";
        if(season == "Summer")
        {
            location = "Alaska";
            price = 0.8 * budget;
        }
        else if(season =="Winter")
        {
            location = "Morocco";
            price = 0.6 * budget;
        }
    }
    else
    {
        campNutOrHotel = "Hotel";
        price = 0.9 * budget;
        if(season == "Summer")
        {
            location = "Alaska";
        }
        else if(season =="Winter")
        {
            location = "Morocco";
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << location << " - " << campNutOrHotel << " - " << price << endl;
}