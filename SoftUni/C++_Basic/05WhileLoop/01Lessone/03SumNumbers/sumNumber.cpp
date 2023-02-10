#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    int sum = 0;
    while (sum  < number)
    {
        int num;
        cin >> num;
        sum = sum + num;
    }
    cout << sum << endl;
}