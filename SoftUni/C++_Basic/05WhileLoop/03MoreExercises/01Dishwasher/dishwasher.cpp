#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    string numberOfBotle;
    getline(cin , numberOfBotle);
    int numberOfDishes, numberOfPots, count;
    numberOfDishes = numberOfPots = count =0;
    int amountInMililiters = stoi(numberOfBotle) * 750;

    string input;
    while (amountInMililiters >= 0)
    {
        getline(cin, input);
        if (input != "End")
        {
            if(count == 2)
            {
                int currentPots = stoi(input);
                numberOfPots = numberOfPots + currentPots;
                amountInMililiters = amountInMililiters - (currentPots * 15);
                count = 0;
            }
            else
            {
                int currentDishes = stoi(input);
                numberOfDishes = numberOfDishes + currentDishes;
                amountInMililiters = amountInMililiters - (currentDishes * 5);
                count ++;
            }
        }
        else
        {
            break;
        }
        
    }
    if(input == "End")
    {
        cout << "Detergent was enough!" << endl;
        cout << numberOfDishes <<" dishes and " << numberOfPots << " pots were washed." << endl;
        cout << "Leftover detergent " << amountInMililiters << " ml." << endl;
    }
    else
    {
        cout << "Not enough detergent, " << abs(amountInMililiters) <<" ml. more necessary!" << endl;
    }
    
}