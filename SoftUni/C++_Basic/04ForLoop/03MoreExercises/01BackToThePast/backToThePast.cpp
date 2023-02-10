#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double money;
    int years;
    cin >> money >> years;

    for(int i=1800; i <= years; i++)
    {
        if(i % 2 == 0)
        {
            money = money - 12000;
        }
        else
        {
            money = money - (12000 + 50 *(i - 1800 + 18));
        }
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    if(money >= 0)
    {
        cout << "Yes! He will live a carefree life and will have " << money << " dollars left." << endl;
    }
    else
    {
        cout << "He will need " << abs(money)<<" dollars to survive." << endl;
    }
}