#include <iostream>
using namespace std;

int main ()
{
    string season;
    double distanceForMonth;
    cin >> season >> distanceForMonth;
    double sallary= 0.0;
    if(distanceForMonth <= 5000)
    {
        if(season == "Spring" || season == "Autumn")
        {
            sallary = (distanceForMonth * 4 * 0.75) * 0.9;
        }
        else if(season == "Summer")
        {
            sallary = (distanceForMonth * 4 * 0.9) * 0.9;
        }
        else if(season == "Winter")
        {
            sallary = (distanceForMonth * 4 * 1.05) * 0.9;
        }
    }
    else if(distanceForMonth > 5000 && distanceForMonth <= 10000)
    {
        if(season == "Spring" || season == "Autumn")
        {
            sallary = (distanceForMonth * 4 * 0.95) * 0.9;
        }
        else if(season == "Summer")
        {
            sallary = (distanceForMonth * 4 * 1.1) * 0.9;
        }
        else if(season == "Winter")
        {
            sallary = (distanceForMonth * 4 * 1.25) * 0.9;
        }
    }
    else if(distanceForMonth > 10000 && distanceForMonth <= 20000)
    {
        sallary = (distanceForMonth * 4 * 1.45) * 0.9;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << sallary << endl;
}