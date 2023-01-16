#include <iostream>
using namespace std;

int main()
{
    double vacantionPrice;
    cin >> vacantionPrice;

    int puzzle, talkingDoll,  teddyBear, minion, truckToy;
    cin >>puzzle >> talkingDoll >>  teddyBear >> minion >> truckToy;

    double discountMultiplier = 0.0;
    
    if (puzzle + talkingDoll + teddyBear + minion + truckToy >= 50)
    {
        discountMultiplier = 0.25;
    }

    double sum = puzzle * 2.6 + talkingDoll * 3 + minion * 8.20 + teddyBear * 4.10 + truckToy * 2;
    double discount = sum * discountMultiplier;

    double sumAfteDiscount = sum - discount;
    double finalSum = sumAfteDiscount * 0.9;

    double leftOver = finalSum - vacantionPrice;

    cout.setf(ios::fixed);
    cout.precision(2);
    
    if (leftOver >=0)
    {
        cout << "Yes! "<< leftOver << " lv left." << endl;
    }
    else
    {
        cout <<"Not enough money! "<< leftOver * (-1) <<" lv needed." << endl;

    }
}