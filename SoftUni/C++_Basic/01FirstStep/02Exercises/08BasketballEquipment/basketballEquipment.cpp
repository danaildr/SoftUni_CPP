#include <iostream>
using namespace std;

int main()
{
    int earTaks;
    cin >> earTaks;

    double sneakers = earTaks * 0.6;
    double equipment = sneakers * 0.8;
    double ball = equipment / 4;
    double accsesoars = ball / 5;

    cout << earTaks + sneakers + equipment + ball + accsesoars << endl;
}