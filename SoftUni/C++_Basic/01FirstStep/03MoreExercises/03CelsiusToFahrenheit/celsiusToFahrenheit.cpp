#include <iostream>
using namespace std;

int main()
{
    double degreeInCelsius;
    cin >> degreeInCelsius;
    double degreeInFahrenheit = degreeInCelsius * 1.8 + 32;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << degreeInFahrenheit << endl;
}