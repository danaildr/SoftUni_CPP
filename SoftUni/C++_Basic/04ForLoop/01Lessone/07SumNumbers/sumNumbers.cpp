#include <iostream>
using namespace std;

int main()
{
    int countNumber;
    cin >> countNumber;
    
    int sum = 0;
    
    for(int i=0; i <countNumber; i++){
        int number;
        cin >> number;
        sum = sum + number;
    }
    cout << sum << endl;
}