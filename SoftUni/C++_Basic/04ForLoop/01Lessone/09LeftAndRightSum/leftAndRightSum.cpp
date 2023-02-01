#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int countNumber;
    cin >> countNumber;
    
    int sum1 = 0;
    int sum2 = 0;
    
    for(int i=0; i <countNumber; i++){
        int number;
        cin >> number;
        sum1 = sum1 + number;
    }
    for(int i=0; i <countNumber; i++){
        int number;
        cin >> number;
        sum2 = sum2 + number;
    }
    
    if(sum1 == sum2)
    {
        cout << "Yes, sum = " << sum1 << endl;
    }
    else
    {
        cout << "No, diff = " << abs(sum1 -sum2) << endl;
    }
}