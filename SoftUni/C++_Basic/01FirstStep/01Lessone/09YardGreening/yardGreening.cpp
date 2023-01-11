#include <iostream>
using namespace std;

int main()
{
    double area;
    cin >> area;

    double price = area * 7.61;
    double discount = price * 0.18;
    double finalePrice = price - discount;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The final price is: " << finalePrice << " lv." << endl;
    cout << "The discount is: " << discount <<" lv."<< endl;
}