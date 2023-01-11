#include <iostream>
using namespace std;

int main()
{
    double sideA;
    cin >> sideA;

    double sideB;
    cin >> sideB;

    double height;
    cin >> height;

    double area = ((sideA + sideB) * height)/2;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << area <<endl;
}