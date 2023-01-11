#include <iostream>
using namespace std;

int main()
{
    double vegetablePrice;
    cin >>vegetablePrice;

    double fruitPrice;
    cin >> fruitPrice;
    
    int vegetableKg;
    cin >> vegetableKg;

    int fruitKg;
    cin >> fruitKg;

    double finalPrice = (vegetableKg * vegetablePrice + fruitKg * fruitPrice) / 1.94;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << finalPrice << endl;
}