#include <iostream>
using namespace std;

int main()
{
    int length;
    cin >> length;

    int width;
    cin >> width;

    int height;
    cin >>height;

    double unavablePercent;
    cin >> unavablePercent;

    double value = ((length * height * width)/1000.0) * (100 - unavablePercent)/100;

    cout << value << endl;

    
}