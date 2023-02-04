#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main()
{
    int countNumber;
    cin >> countNumber;
    int maxNumb = INT_MIN;
    int sum =0;
    
    for (int i=0; i < countNumber; i++)
    {
        int number;
        cin >> number;
        if(number > maxNumb )
        {
            maxNumb = number;
        }
        sum = sum + number;
    }
    if(sum/2.0 == maxNumb)
    {
        cout << "Yes" << endl;
        cout << "Sum = " << maxNumb << endl;
    }
    else
    {
        cout << "No" << endl;
        cout << "Diff = " << abs(sum - maxNumb*2) << endl;
    }
}