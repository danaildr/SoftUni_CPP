#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    string series;
    getline(cin, series);

    int seriesDuration, breakDuration;
    cin >> seriesDuration >> breakDuration;

    double timeForLunch = breakDuration / 8.0;
    double timeFotBreak = breakDuration / 4.0;

    double timeForMovie = breakDuration - (timeForLunch + timeFotBreak);
    double leftOver = timeForMovie - seriesDuration;

    if(leftOver >=0)
    {
        cout << "You have enough time to watch " << series << " and left with " <<  ceil(leftOver) << " minutes free time." << endl;
    }
    else
    {
        cout << "You don't have enough time to watch " << series << ", you need " << ceil(leftOver * (-1)) << " more minutes." << endl;
    }
}