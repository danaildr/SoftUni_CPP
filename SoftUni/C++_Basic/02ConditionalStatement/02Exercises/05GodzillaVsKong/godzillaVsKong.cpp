#include <iostream>
using namespace std;

int main()
{
    double budget;
    cin >> budget;

    int extras;
    cin >> extras;

    double clothingPrice;
    cin >> clothingPrice;

    double decorPrice = budget * 0.1;

    double allClothingPrice = clothingPrice * extras;

    if(extras > 150)
    {
        allClothingPrice = allClothingPrice * 0.9;
    }
    
    double finalPrice = decorPrice + allClothingPrice;

    double leftOver = budget - finalPrice;

    cout.setf(ios::fixed);
    cout.precision(2);
    if(leftOver >= 0)
    {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << leftOver << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << leftOver * (-1) << " leva more." << endl;
    }
}