#include <iostream>
using namespace std;

int main()
{
    int chikenMenu;
    cin >> chikenMenu;

    int fishMenu;
    cin >> fishMenu;

    int vegatarianMenu;
    cin >> vegatarianMenu;

    double sumBeforeDesert = chikenMenu * 10.35 + fishMenu * 12.40 + vegatarianMenu * 8.15;
    double desertSum = sumBeforeDesert * 0.2;
    double finaleSum = sumBeforeDesert + desertSum + 2.50;

    cout << finaleSum << endl;
}