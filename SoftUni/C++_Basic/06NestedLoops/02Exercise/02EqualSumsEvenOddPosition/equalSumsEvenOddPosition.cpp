#include <iostream>
using namespace std;

int main()
{
    int startNumber, stopNumber, number;
    cin >> startNumber >> stopNumber;
    int oddSum, evenSum;
    for (int j = startNumber; j <= stopNumber; j++)
    {
        number = j;
        oddSum = evenSum =0;
        for(int i = 0; i < 6; i+=2)
        {
            int lastDigit = number % 10;
            number = number / 10;
            oddSum = oddSum + lastDigit;
            lastDigit = number % 10;
            number = number / 10;
            evenSum = evenSum + lastDigit;
        }
        if(oddSum == evenSum)
        {
            cout << j << " ";
        }  
    }
    cout << endl;
}