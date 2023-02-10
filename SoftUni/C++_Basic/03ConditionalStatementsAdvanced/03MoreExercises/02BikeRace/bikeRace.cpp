#include <iostream>

using namespace std;
int main()
{
    int juniorCyclists, seniorCyclists;
    string bikeType;
    cin >> juniorCyclists >> seniorCyclists >> bikeType;
    double taxes;
    
    if(bikeType == "trail")
    {
        taxes = juniorCyclists * 5.50 + seniorCyclists * 7.0;
    }
    else if(bikeType == "cross-country")
    {
        taxes = juniorCyclists * 8.0 + seniorCyclists * 9.50;
    }
    else if(bikeType == "downhill")
    {
        taxes = juniorCyclists * 12.25 + seniorCyclists * 13.75;
    }
    else if (bikeType == "road")
    {
        taxes = juniorCyclists * 20.0 + seniorCyclists * 21.50;
    }
    
    if(bikeType == "cross-country" && juniorCyclists + seniorCyclists >= 50)
    {
        taxes = taxes * 0.75;
    }
    
    taxes = taxes * 0.95;
    
    cout.setf(ios::fixed);
    cout.precision(2); 
    cout << taxes << endl;
}
