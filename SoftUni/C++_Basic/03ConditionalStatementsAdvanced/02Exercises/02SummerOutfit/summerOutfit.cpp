#include <iostream>
using namespace std;

int main()
{
    int temp;
    string time;
    cin >> temp >> time;

    string outfit, shoes;

    if(temp >= 10 && temp <= 18)
    {
        if(time == "Morning")
        {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        }
        else if (time == "Afternoon" || time == "Evening")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    else if(temp > 18 && temp <=24)
    {
        if(time == "Afternoon")
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else if (time == "Morning" || time == "Evening")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    else if(temp >= 25)
    {
        if(time == "Morning")
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else if (time == "Afternoon")
        {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
        else if (time == "Evening")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }


    cout << "It's " << temp <<" degrees, get your " << outfit <<" and " << shoes << "." << endl;
}