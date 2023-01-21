#include <iostream>
using namespace std;

int main()
{
    string city;
    double value;
    cin >> city >> value;

    cout.setf(ios::fixed);
    cout.precision(2);


    if(value >= 0 && value <= 500)
    {
        if(city == "Sofia")
        {
            cout << value * 0.05 << endl;
        }
        else if(city == "Varna")
        {
            cout << value * 0.045 << endl;
        }
        else if(city == "Plovdiv")
        {
            cout << value * 0.055 << endl;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    else if(value > 500 && value <= 1000)
    {if(city == "Sofia")
        {
            cout << value * 0.07 << endl;
        }
        else if(city == "Varna")
        {
            cout << value * 0.075 << endl;
        }
        else if(city == "Plovdiv")
        {
            cout << value * 0.08 << endl;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    else if(value > 1000 && value <= 10000)
    {
        if(city == "Sofia")
        {
            cout << value * 0.08 << endl;
        }
        else if(city == "Varna")
        {
            cout << value * 0.1 << endl;
        }
        else if(city == "Plovdiv")
        {
            cout << value * 0.12 << endl;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    else if(value > 10000)
    {
        if(city == "Sofia")
        {
            cout << value * 0.12 << endl;
        }
        else if(city == "Varna")
        {
            cout << value * 0.13 << endl;
        }
        else if(city == "Plovdiv")
        {
            cout << value * 0.145 << endl;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    else
    {
        cout << "error" << endl;
    }
}