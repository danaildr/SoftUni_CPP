#include <iostream>
#include <climits>
using namespace std;

int main()
{
    string input;
    int maxNumber = INT_MIN;
    cin >> input;
    while (input != "Stop")
    {
        int number = stoi(input);
        if(number > maxNumber)
        {
            maxNumber = number;
        }
        cin >> input;
    }
    cout << maxNumber << endl;
}