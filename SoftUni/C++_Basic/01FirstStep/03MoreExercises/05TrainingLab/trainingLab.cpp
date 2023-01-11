#include <iostream>
using namespace std;

int main()
{
    double heightInMeters;
    cin >> heightInMeters;
    int heightInCentimeters = heightInMeters * 100;

    double widthInMeters;
    cin >> widthInMeters;
    int widthInCentimeters = widthInMeters * 100 - 100;

    

    int rows = widthInCentimeters / 70;
    int collumn = heightInCentimeters / 120;

    int numberOfTables = rows * collumn - 3;

    cout << numberOfTables << endl;
}
