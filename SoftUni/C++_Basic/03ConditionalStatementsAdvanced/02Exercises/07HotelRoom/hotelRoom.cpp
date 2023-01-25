#include <iostream>
using namespace std;

int main()
{
    string month;
    int vacantionDays;
    cin >> month >> vacantionDays;

    double studioPrice, apartmentPrice;
    double studioDiscount = 1.0;
    double apartmentDiscount = 1.0;


    if(month == "May" || month == "October")
    {
        studioPrice = 50.0;
        apartmentPrice = 65.0;
    }
    else if(month == "June" || month == "September")
    {
        studioPrice = 75.2;
        apartmentPrice = 68.7;
    }
    else if(month == "July" || month == "August")
    {
        studioPrice = 76.0;
        apartmentPrice = 77.0;
    }

    if(vacantionDays > 14)
    {
        apartmentDiscount = 0.9;
        if(month == "May" || month == "October")
        {
            studioDiscount = 0.7;
        }
        else if(month == "June" || month == "September")
        {
            studioDiscount = 0.8;
        }
    }
    else if(vacantionDays >7)
    {
        if(month == "May" || month == "October")
        {
            studioDiscount = 0.95;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Apartment: "<< (apartmentPrice * vacantionDays) * apartmentDiscount <<" lv." << endl;
    cout << "Studio: " << (studioPrice * vacantionDays) * studioDiscount << " lv." << endl;

}