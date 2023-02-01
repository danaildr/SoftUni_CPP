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
        if(i%2 == 0)
        {
            sum1 = sum1 + number;
        }
        else
        {
            sum2 = sum2 + number;
        }
    }
    
    if(sum1 == sum2)
    {
        cout << "Yes"<< endl;
        cout << "Sum = " << sum1 << endl;
    }
    else
    {
        cout << "No"<< endl;
        cout << "Diff = " << abs(sum1 - sum2) << endl;
    }
}
