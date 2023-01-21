#include <iostream>
using namespace std;

int main()
{
    string product, city;
    double value;
    cin >> product >> city >> value ;

    if(city == "Sofia")
    {
        if(product == "coffee")
        {
            cout << value * 0.5 <<endl;
        }
        else if(product == "water")
        {
            cout << value * 0.8 <<endl;
        }
        else if(product == "beer")
        {
            cout << value * 1.2 <<endl;
        }
        else if(product == "sweets")
        {
            cout << value * 1.45 <<endl;
        }
        else if(product == "peanuts")
        {
            cout << value * 1.60 <<endl;
        }
    }
    else if(city == "Plovdiv")
    {
        if(product == "coffee")
        {
            cout << value * 0.4 <<endl;
        }
        else if(product == "water")
        {
            cout << value * 0.7 <<endl;
        }
        else if(product == "beer")
        {
            cout << value * 1.15 <<endl;
        }
        else if(product == "sweets")
        {
            cout << value * 1.30 <<endl;
        }
        else if(product == "peanuts")
        {
            cout << value * 1.50 <<endl;
        }
    }
    else if(city == "Varna")
    {
        if(product == "coffee")
        {
            cout << value * 0.45 <<endl;
        }
        else if(product == "water")
        {
            cout << value * 0.7 <<endl;
        }
        else if(product == "beer")
        {
            cout << value * 1.10 <<endl;
        }
        else if(product == "sweets")
        {
            cout << value * 1.35 <<endl;
        }
        else if(product == "peanuts")
        {
            cout << value * 1.55 <<endl;
        }
    }
}