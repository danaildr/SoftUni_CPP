#include <iostream>
using namespace std;

int main()
{
    double side;
    cin >> side;

    double height;
    cin >> height;

    double area = (side * height) / 2;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << area << endl;
}