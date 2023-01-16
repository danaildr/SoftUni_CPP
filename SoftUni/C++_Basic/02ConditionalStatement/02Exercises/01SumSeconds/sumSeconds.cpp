#include <iostream>
using namespace std;

int main()
{
    int firstTime, secondTime, thirdTime;
    cin >> firstTime >> secondTime  >> thirdTime;

    int time;
    time = firstTime + secondTime + thirdTime;

    int minute = time / 60;
    int seconds = time % 60;

    if (seconds < 10)
    {
        cout << minute << ":0" << seconds << endl;
    }
    else
    {
        cout << minute << ":" << seconds << endl;
    }
}