#include <iostream>
using namespace std;

int main()
{
    string seaseon, groupType, sport;
    int students, days;
    cin >> seaseon >> groupType >> students >> days;
    double price, discount, dayPrice;

    if(students >= 50)
    {
        discount = 0.5;
    }
    else if(students >=20 && students < 50)
    {
        discount = 0.85;
    }
    else if(students >= 10 && students < 20)
    {
        discount = 0.95;
    }
    else
    {
        discount = 1.0;
    }

    if(seaseon == "Winter")
    {
        if(groupType == "boys")
        {
            sport = "Judo";
            dayPrice = 9.60;
        }
        else if(groupType == "girls")
        {
            sport = "Gymnastics";
            dayPrice = 9.60;
        }
        else if(groupType == "mixed")
        {
            sport= "Ski";
            dayPrice = 10.0;
        }
    }
    else if (seaseon == "Spring")
    {
        if(groupType == "boys")
        {
            sport = "Tennis";
            dayPrice = 7.20;
        }
        else if(groupType == "girls")
        {
            sport = "Athletics";
            dayPrice = 7.20;
        }
        else if(groupType == "mixed")
        {
            sport= "Cycling";
            dayPrice = 9.50;
        }
    }
    else if (seaseon == "Summer")
    {
        if(groupType == "boys")
        {
            sport = "Football";
            dayPrice = 15.0;
        }
        else if(groupType == "girls")
        {
            sport = "Volleyball";
            dayPrice = 15.0;
        }
        else if(groupType == "mixed")
        {
            sport= "Swimming";
            dayPrice = 20.0;
        }
    }
    price = dayPrice * days * students * discount;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << sport << " " << price << " lv." << endl;
}