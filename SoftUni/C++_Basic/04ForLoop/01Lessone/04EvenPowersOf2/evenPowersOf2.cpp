#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number;
    cin >> number;
    
    for(int i=0; i <= number; i+=2){
        cout << pow(2.0, i) << endl;
    }
}