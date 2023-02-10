#include <iostream>
using namespace std;

int main()
{
    string text;
    cin >> text;
    while (text != "Stop")
    {
        cout << text << endl;
        cin >> text;  
    }
    
}