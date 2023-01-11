#include <iostream>
using namespace std;
int main()
{
    string firstName;
    cin >> firstName;

    string lastName;
    cin >> lastName;

    int ages;
    cin >> ages;

    string town;
    cin >> town;

    cout << "You are " << firstName << " " << lastName <<", a " << ages << "-years old person from " <<town << ".";
}