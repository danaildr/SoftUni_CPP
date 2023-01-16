#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    double bonusScore = 0.0;
    
    if(number <= 100)
    {
        bonusScore = 5;
    }
    else if (number > 100 and number <= 1000)
    {
        bonusScore = 0.2 * number;
    }
    else
    {
        bonusScore = 0.1 * number;
    }


    if(number % 2 == 0)
    {
        bonusScore +=1;
    }
    else if (number %10 == 5)
    {
        bonusScore +=2;
    }
    double finalNumber = number + bonusScore;

    cout << bonusScore << endl;
    cout << finalNumber << endl;
}