#include <iostream>
using namespace std;

int main()
{
    double vacationPrice, money;
    int days, countSpend;
    cin >> vacationPrice >> money;
    days = countSpend = 0;
    while (countSpend < 5 && money < vacationPrice)
    {
        string spenOrSave;
        cin >> spenOrSave;
        double moneySpendOrSave;
        cin >> moneySpendOrSave;
        if(spenOrSave == "save")
        {
            money = money + moneySpendOrSave;
            countSpend = 0;
        }
        else if(spenOrSave == "spend")
        {
            countSpend++;
            money = money - moneySpendOrSave;
            if(money < 0)
            {
                money = 0;
            }
        }
        days++;
    }
    if(countSpend == 5)
    {
        cout << "You can't save the money." << endl;
        cout << days << endl;
    }
    else if(money >= vacationPrice)
    {
        cout << "You saved the money for " << days<<" days." << endl;
    }
}