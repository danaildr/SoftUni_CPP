#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 1111; i <= 9999; i++)
    {
        int a, b, c, d;
        a = i % 10;
        b = (i / 10) % 10;
        c = (i/ 100) % 10;
        d = (i / 1000) % 10;
        if (a != 0 && b != 0 && c != 0 && d != 0 && num % a ==0 && num % b == 0 && num % c == 0 && num % d ==0)
        {
            cout << i << " ";
        }
    }
    
}