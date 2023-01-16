#include <iostream>
using namespace std;

int main()
{
    double worldRecord, distance, timeForMeter;
    cin >> worldRecord >> distance >> timeForMeter;

    int coutSlow = distance / 15;

    double ivanRecord = distance * timeForMeter + coutSlow * 12.5;

    cout.setf(ios::fixed);
    cout.precision(2);

    if(ivanRecord < worldRecord)
    {
        cout << "Yes, he succeeded! The new world record is " << ivanRecord << " seconds." << endl;
    }
    else
    {
        cout << "No, he failed! He was " << ivanRecord - worldRecord << " seconds slower." << endl;
    }
}