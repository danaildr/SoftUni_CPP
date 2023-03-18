#include <iostream>
using namespace std;


int main()
{
    string input;
    cin >> input;
    
    int sumPrime, sumNonPrime;
    sumNonPrime = sumPrime = 0;

    while (input != "stop")
    {
        int number = stoi(input);
        if(number < 0)
        {
            cout << "Number is negative." << endl;
        }
        else
        {
            bool is_prime = true;
            for (int i = 2; i <= number / 2; i++) 
            {
                if (number % i == 0) 
                {
                  is_prime = false;
                  break;  
                } 
            }
            if(is_prime)
            {
                sumPrime = sumPrime + number;
            }
            else
            {
                sumNonPrime = sumNonPrime + number;
            }
        }
        cin >> input;
    }
    cout << "Sum of all prime numbers is: " << sumPrime << endl;
    cout << "Sum of all non prime numbers is: "<< sumNonPrime << endl;
}