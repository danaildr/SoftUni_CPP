#include <iostream>
using namespace std;

int main()
{
    string destination;
    cin >> destination;
    double price, money;

    while (destination != "End")
    {
        cin >> price;
        int savedMoney =0;
        while (savedMoney < price)
        {
            cin >> money;
            savedMoney = savedMoney + money;
        }
        cout << "Going to " << destination << "!"<< endl;
        cin >> destination;
    }
}