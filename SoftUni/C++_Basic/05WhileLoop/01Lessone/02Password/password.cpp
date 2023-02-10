#include <iostream>
using namespace std;

int main()
{
    string name, password, input;
    cin >> name >> password>> input;
    while (input != password)
    {
        cin >> input;
    }
    cout << "Welcome " << name << "!"<< endl; 
}