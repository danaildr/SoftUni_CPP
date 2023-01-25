#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string daysAsString;
    getline(cin, daysAsString);
   
    int daysToStay = stoi(daysAsString);
    
    
    string roomType;
    getline(cin, roomType);

    string  evaluation;
    getline(cin, evaluation);

    int nightToStay = daysToStay - 1;
    double dayPrice;

    if(roomType == "room for one person")
    {
        dayPrice = 18.0;
    }
    else if(roomType == "apartment")
    {
        dayPrice = 25.0;
        if(nightToStay < 10)
        {
            dayPrice = dayPrice * 0.7;
        }
        else if(nightToStay >= 10 && nightToStay <=15)
        {
            dayPrice = dayPrice * 0.65;
        }
        else
        {
            dayPrice = dayPrice * 0.5;
        }
    }
    else if (roomType == "president apartment")
    {
        dayPrice = 35.0;
        if(nightToStay < 10)
        {
            dayPrice = dayPrice * 0.9;
        }
        else if(nightToStay >= 10 && nightToStay <= 15)
        {
            dayPrice = dayPrice * 0.85;
        }
        else
        {
            dayPrice = dayPrice * 0.8;
        }
    }
    
    double finalPrice = nightToStay * dayPrice;
    if(evaluation == "positive")
    {
        finalPrice = finalPrice * 1.25;
    }
    else if ( evaluation == "negative")
    {
        finalPrice = finalPrice * 0.9;
    }

    cout.setf(ios::fixed);
    cout.precision(2);


    cout << finalPrice << endl;


}