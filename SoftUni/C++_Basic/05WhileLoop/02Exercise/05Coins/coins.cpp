#include <iostream>
using namespace std;

int main()
{
    double amount;
    cin >> amount;
    int count=0;
    int amountInInt = 100* amount;

    while (amountInInt > 0)
    {
        if(amountInInt >=200) 
        {
            amountInInt = amountInInt -200;
            count++;
        }
        else if (amountInInt >= 100)
        {
            amountInInt = amountInInt -100;
            count++;
        }
        else if (amountInInt >= 50)
        {
            amountInInt = amountInInt -50;
            count++;
        }
        else if (amountInInt >= 20)
        {
            amountInInt = amountInInt - 20;
            count++;
        }
        else if (amountInInt >= 10)
        {
            amountInInt = amountInInt - 10;
            count++;
        }
        else if (amountInInt >= 5)
        {
            amountInInt = amountInInt - 5;
            count++;
        }
        else if (amountInInt >= 2)
        {
            amountInInt = amountInInt - 2;
            count++;
        }
        else
        {
            amountInInt = amountInInt - 1;
            count++;
        }
    }
    cout << count << endl;  
}