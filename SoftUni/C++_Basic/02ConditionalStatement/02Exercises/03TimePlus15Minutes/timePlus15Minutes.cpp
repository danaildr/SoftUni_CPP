#include <iostream>
using namespace std;

int main()
{
    int startHours, startMinutes;
    cin >> startHours >> startMinutes;

    int timeInMinutes = startHours * 60 + startMinutes;
    int finalTimeInMinute = timeInMinutes + 15;

    int finalHours = finalTimeInMinute / 60;
    int finalMinutes = finalTimeInMinute % 60;

    if (finalHours >= 24)
    {
        finalHours -= 24;
    }

    if(finalMinutes < 10)
    {
        cout << finalHours << ":0" << finalMinutes;
    }
    else
    {
        cout << finalHours << ":" << finalMinutes;
    }
    
}