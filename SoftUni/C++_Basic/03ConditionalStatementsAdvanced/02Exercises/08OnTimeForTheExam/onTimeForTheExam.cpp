#include <iostream>
using namespace std;

int main()
{
    int examHours, examMinutes, arrivalHours, arrivalMinutes;
    cin >> examHours >> examMinutes >> arrivalHours >> arrivalMinutes;

    int examTime = examHours * 60 + examMinutes;
    int arrivalTime = arrivalHours * 60 + arrivalMinutes;

    if(arrivalTime > examTime)
    {
        cout << "Late" << endl;
        if(arrivalTime - examTime == 60)
        {
            cout << "1:00 hours after the start" << endl;
        }
        else if(arrivalTime - examTime < 60)
        {
            cout << arrivalTime - examTime << " minutes after the start" << endl;
        }
        else
        {
            int hours, minutes;
            hours = (arrivalTime - examTime)/60;
            minutes = (arrivalTime - examTime) % 60;
            
            if(minutes <10)
            {
                cout << hours << ":0"<< minutes << " hours after the start" << endl;
            }
            else
            {
                cout << hours << ":"<< minutes << " hours after the start" << endl;
            }
        }
        
        
    }
    else if((examTime - arrivalTime) <= 30)
    {
        cout << "On time" << endl;
        if(examTime > arrivalTime)
        {
            cout << examTime - arrivalTime << " minutes before the start" << endl;
        }
    }
    else
    {
        cout << "Early" << endl;
        if(examTime - arrivalTime == 60)
        {
            cout << "1:00 hours before the start" << endl;
        }
        else if(examTime - arrivalTime < 60)
        {
            cout << examTime - arrivalTime << " minutes before the start" << endl;
        }
        else
        {
            int hours, minutes;
            hours = (examTime - arrivalTime )/ 60;
            minutes = (examTime - arrivalTime ) % 60;
            if(minutes < 10)
            {
                cout << hours << ":0" << minutes <<" hours before the start" << endl;
            }
            else
            {
                cout << hours << ":" << minutes <<" hours before the start" << endl;
            }
        }
        
        
    }
}

