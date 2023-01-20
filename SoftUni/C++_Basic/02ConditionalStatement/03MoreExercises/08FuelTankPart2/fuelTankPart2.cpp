#include <iostream>
using namespace std;

int main()
{
    string fuel, ifDiscount;
    double fuelNeed;
    cin >> fuel >> fuelNeed >> ifDiscount;
    
    double price;
    
    if(fuel == "Gas")
    {
        if(ifDiscount == "Yes")
        {
            price = fuelNeed * (0.93 - 0.08) ;
        }
        else if(ifDiscount == "No")
        {
            price = fuelNeed * 0.93 ;
        }
    }
    else if(fuel == "Gasoline")
    {
        if(ifDiscount == "Yes")
        {
            price = fuelNeed * (2.22 - 0.18) ;
        }
        else if(ifDiscount == "No")
        {
            price = fuelNeed * 2.22 ;
        }
    }
    else if(fuel =="Diesel")
    {
        if(ifDiscount == "Yes")
        {
            price = fuelNeed * (2.33 - 0.12) ;
        }
        else if(ifDiscount == "No")
        {
            price = fuelNeed * 2.33 ;
        }
    }
    
    if(fuelNeed > 25)
    {
        price = price * 0.9;
    }
    else if(fuelNeed > 20)
    {
        price = price * 0.92;
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << price << " lv." << endl;
}