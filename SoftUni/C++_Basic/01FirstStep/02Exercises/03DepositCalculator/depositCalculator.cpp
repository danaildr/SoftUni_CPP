#include <iostream>
using namespace std;

int main()
{
    double deposit;
    cin >> deposit;

    int depositPeriod;
    cin >> depositPeriod;
    
    double valuePercent;
    cin >> valuePercent;

    double finaleSum = deposit + depositPeriod *((deposit * (valuePercent/100))/12);

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << finaleSum << endl;
}