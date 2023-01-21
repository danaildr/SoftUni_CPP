#include <iostream>
using namespace std;

int main()
{
    int hours;
    string day;
    cin >> hours >> day;

    if(day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday")
    {
        if(hours < 10 || hours > 18)
        {
            cout << "closed" << endl;
        }
        else
        {
            cout << "open" << endl;
        }
    }
    else if(day == "Sunday")
    {
        cout << "closed" << endl;
    }
}