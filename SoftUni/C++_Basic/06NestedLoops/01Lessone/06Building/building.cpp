#include <iostream>
using namespace std;

int main()
{
    int floors, premises;
    cin >> floors >> premises;

    for(int fl = floors; fl >0; fl--)
    {
        for(int pr =0; pr < premises; pr++ )
        {
            if(fl == floors)
            {
            cout << "L"<< fl << pr << " ";
            }
            else if (fl % 2 == 0)
            {
                cout << "O"<< fl << pr << " ";
            }else{
                cout << "A"<< fl << pr << " ";
            }
        }
        cout << endl;
    }
}