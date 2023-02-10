#include <iostream>
using namespace std;

int main()
{
    int counter;
    cin >> counter;
    int allTonsCargo, allSum;
    allTonsCargo = allSum = 0;
    double c1, c2, c3;
    c1 = c2 = c3 = 0;


    for (int i=1; i <= counter; i++)
    {
        int cargo;
        cin >> cargo;
        allTonsCargo +=cargo;
        if(cargo <= 3)
        {
            allSum +=(cargo * 200);
            c1 += cargo;
        }
        else if(cargo >= 4 && cargo <= 11)
        {
            allSum +=(cargo * 175);
            c2 += cargo;
        }
        else if(cargo >= 12)
        {
            allSum +=(cargo * 120);
            c3 += cargo;
        }
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << allSum * 1.0 / allTonsCargo << endl;
    cout << c1/allTonsCargo * 100 << "%" << endl;
    cout << c2/allTonsCargo * 100 << "%" << endl;
    cout << c3/allTonsCargo * 100 << "%" << endl;

}