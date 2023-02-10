#include <iostream>
using namespace std;

int main()
{
    double input;
    cin >> input;
    cout.setf(ios::fixed);
    cout.precision(2);
    while (input >=0)
    {
        cout << "Result: "<< input * 2.0 << endl;
        cin >> input;
    }
    cout << "Negative number!" << endl;
}