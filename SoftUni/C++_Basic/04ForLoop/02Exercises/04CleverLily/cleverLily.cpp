#include <iostream>
using namespace std;

int main()
{
    int age, toyPrice;
    double washingMachinePruce;

    cin >> age >> washingMachinePruce >> toyPrice;
    int giftNumber;
    int moneyGift = 10;
    double sum = 0.0;
    for(int i=1; i<= age; i++)
    {
        if(i%2 ==0)
        {
            sum = sum + moneyGift;
            sum -=1;
            moneyGift +=10;
        }
        else
        {
            giftNumber +=1;
        }
    }
    sum = sum + giftNumber * toyPrice;
    cout.setf(ios::fixed);
    cout.precision(2);
    
    if(sum >= washingMachinePruce)
    {
        cout << "Yes! " << sum - washingMachinePruce << endl;
    }
    else
    {
        cout << "No! " << washingMachinePruce - sum << endl;
    }
}