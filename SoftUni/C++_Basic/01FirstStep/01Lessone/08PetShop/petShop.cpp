#include <iostream>
using namespace std;

int main()
{
    int dogFoodsPackages;
    cin >> dogFoodsPackages;
    int catFoodsPackages;
    cin >> catFoodsPackages;
    float sum = dogFoodsPackages * 2.5 + catFoodsPackages * 4;
    cout << sum << " lv." << endl;
}