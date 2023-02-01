#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int countNumber;
    cin >> countNumber;
    
    int minNum = INT_MAX;
    int maxNum = INT_MIN;
    
    for(int i=0; i <countNumber; i++){
        int number;
        cin >> number;
        if(number > maxNum)
        {
            maxNum = number;
        }
        if(number < minNum)
        {
            minNum = number;
        }
    }
    cout << "Max number: " << maxNum << endl;
    cout << "Min number: " << minNum << endl;
}