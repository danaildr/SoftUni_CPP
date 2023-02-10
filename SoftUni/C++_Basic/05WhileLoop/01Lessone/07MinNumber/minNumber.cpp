#include <iostream>
#include <climits>
using namespace std;

int main()
{
    string input;
    int minNumber = INT_MAX;
    cin >> input;
    while (input != "Stop")
    {
        int number = stoi(input);
        if(number < minNumber)
        {
            minNumber = number;
        }
        cin >> input;
    }
    cout << minNumber << endl;
}