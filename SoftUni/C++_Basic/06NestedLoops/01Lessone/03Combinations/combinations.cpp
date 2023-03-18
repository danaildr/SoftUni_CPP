#include <iostream>
using namespace std;

int main()
{
    int digit;
    cin >> digit;

    int validCombinationsCount =0;

    for(int i=0; i <= digit; i++)
    {
        for(int j=0; j <= digit; j++)
        {
            for(int y=0; y <= digit; y++)
            {
                if((i+j+y) == digit)
                {
                    validCombinationsCount++;
                }
            }
        }
    }
    cout << validCombinationsCount << endl;
}