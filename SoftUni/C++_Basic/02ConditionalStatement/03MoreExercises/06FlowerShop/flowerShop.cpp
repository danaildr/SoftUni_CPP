#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int magnolias, hyacinths, roses, cacti;
    double giftPrice;
    cin >> magnolias >> hyacinths >> roses >> cacti >> giftPrice;
    
    double profit = (magnolias * 3.25 + hyacinths * 4 + roses * 3.50 + cacti * 8) * 0.95;
    
    if(profit >= giftPrice)
    {
        cout << "She is left with " << floor(profit - giftPrice)  <<" leva." << endl;
    }
    else
    {
        cout << "She will have to borrow "<< ceil(giftPrice - profit) << " leva." << endl;
    }
    
}