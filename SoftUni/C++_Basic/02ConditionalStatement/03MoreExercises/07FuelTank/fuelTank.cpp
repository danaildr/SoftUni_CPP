#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string fuel;
    cin >> fuel;
    double liters;
    cin >> liters;
    
    if(fuel == "Gas"  or fuel == "Gasoline" or fuel == "Diesel")
    {
        transform(fuel.begin(), fuel.end(), fuel.begin(), ::tolower);
        if(liters >= 25)
        {
            cout << "You have enough " << fuel << "." << endl;
        }
        else
        {
            cout << "Fill your tank with " << fuel << "!" << endl;
        }
    }
    else
    {
        cout << "Invalid fuel!" << endl;
    }
    
}