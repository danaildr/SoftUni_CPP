#include <iostream>
using namespace std;

int main()
{
    double houseHeight;
    cin >> houseHeight;

    double houseLenght;
    cin >> houseLenght;

    double roofHeight;
    cin >> roofHeight;

    double greenArea = (2 * (houseHeight * houseLenght) - 2 * 2.25) + (2 * (houseHeight * houseHeight) - 2.4);
    double greenPeint = greenArea / 3.4;

    double redArea = ((2 * houseHeight * houseLenght)+ (2 * ((houseHeight * roofHeight) / 2)));
    double redPeint = redArea / 4.3;

    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << greenPeint << endl;
    cout << redPeint << endl;
}