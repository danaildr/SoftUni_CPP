#include <iostream>
using namespace std;

int main()
{
    double themperature;
    cin >> themperature;

    if(themperature >= 26.00 and themperature <= 35.00){
        cout << "Hot" << endl;
    }else if (themperature >= 20.1 and themperature <=25.9)
    {
        cout << "Warm" << endl;
    }else if (themperature >= 15.00 and themperature <=20.00)
    {
        cout << "Mild" << endl;
    }else if (themperature >= 12.00 and themperature <=14.9)
    {
        cout << "Cool" << endl;
    }else if (themperature >= 5.00 and themperature <=11.9)
    {
        cout << "Cold" << endl;
    }else
    {
        cout << "unknown" << endl;
    }
    
    
}