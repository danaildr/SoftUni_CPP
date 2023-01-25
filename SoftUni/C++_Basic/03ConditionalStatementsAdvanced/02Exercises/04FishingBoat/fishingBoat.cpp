#include <iostream>
using namespace std;

int main()
{
    int budget, fishermen;
    string season;
    cin >> budget >> season >> fishermen;
    double discount = 0.9;
    double price;
    double numberOfFishermen = fishermen * 1.0;


    
    if(fishermen >= 7 && fishermen <= 11)
    {
        discount = 0.85;
    }
    else if(fishermen >= 12)
    {
        discount = 0.75;
    }


    if(season == "Summer" || season == "Autumn")
    {
        price = 4200 * discount;
    }
    else if(season == "Spring")
    {
        price = 3000 * discount;
    }
    else if(season == "Winter")
    {
        price = 2600 * discount;
    }

    if(fishermen % 2 == 0 && season != "Autumn")
    {
        price = price * 0.95;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if(budget >= price)
    {
        cout << "Yes! You have " << budget - price <<" leva left." << endl;
    }
    else
    {
        cout << "Not enough money! You need " << price - budget << " leva." << endl;
    }
}