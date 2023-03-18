#include <iostream>
using namespace std;

int main()
{
    int startNumber, stopNumber, magicNumber, counter, firstNumber, secondNumber;
    cin >> startNumber >> stopNumber >> magicNumber;
    bool isFound = false;
    counter = firstNumber = secondNumber =0;
    for(int i = startNumber; i <= stopNumber; i++)
    {
        for(int j = startNumber; j <= stopNumber; j++)
        {
            counter++;
            if((i+j) == magicNumber)
            {
                firstNumber = i;
                secondNumber = j;
                isFound = true;
                goto endOfLoop;
            }
        }
    }
    endOfLoop:
    if(isFound)
    {
        cout << "Combination N:"<< counter << " (" << firstNumber <<" + "<< secondNumber << " = " << magicNumber <<")" << endl;
    }
    else
    {
        cout << counter << " combinations - neither equals " << magicNumber << endl;
    }
}