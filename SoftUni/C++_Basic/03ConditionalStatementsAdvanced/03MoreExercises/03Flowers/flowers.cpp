#include <iostream>
using namespace std;

int main()
{
    int chrysanthemums, roses, tulips;
    string season, isHoliday;
    cin >> chrysanthemums >> roses >> tulips >> season >> isHoliday;
    
    double holidayBonus = 1.0;
      
    if(isHoliday == "Y")
    {
        holidayBonus = 1.15;
    }
    
    double price;
    
    if(season == "Spring" || season == "Summer")
    {
        price = chrysanthemums * 2.0 + roses * 4.10 + tulips * 2.5;
        if(season == "Spring" && tulips > 7)
        {
            price = price * 0.95;
        }
    }
    else if(season == "Autumn" || season == "Winter")
    {
        price = chrysanthemums * 3.75 + roses * 4.50 + tulips * 4.15;
        
        if(season == "Winter" && roses >= 10)
        {
            price = price * 0.9;
        }
    }
    
    if(chrysanthemums + roses + tulips > 20)
    {
        price = price * 0.8;
    }
    
    price = price * holidayBonus  + 2;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << price << endl;
}