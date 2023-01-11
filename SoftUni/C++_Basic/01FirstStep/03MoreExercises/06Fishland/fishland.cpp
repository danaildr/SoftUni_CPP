#include <iostream>
using namespace std;

int main()
{
    double skumriaPrice;
    cin >> skumriaPrice;

    double cacaPrice;
    cin >> cacaPrice;

    double palamudKg;
    cin >> palamudKg;

    double safridKg;
    cin >> safridKg;

    int shellKg;
    cin >> shellKg;

    double palamudPrice = skumriaPrice + skumriaPrice * 0.6;
    double safridPrice = cacaPrice + cacaPrice * 0.8;

    double sumPalamud = palamudKg * palamudPrice;
    double sumSafrid = safridKg * safridPrice;
    double sumShell = shellKg * 7.50;

    double sum = sumPalamud + sumSafrid + sumShell;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << sum << endl;
}