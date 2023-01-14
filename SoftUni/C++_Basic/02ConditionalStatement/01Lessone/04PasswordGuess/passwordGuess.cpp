#include <iostream>
using namespace std;

int main()
{
    string inputPassword;
    cin >> inputPassword;

    if(inputPassword == "s3cr3t!P@ssw0rd")
    {
        cout << "Welcome" << endl;
    }
    else
    {
        cout << "Wrong password!" << endl;
    }
}