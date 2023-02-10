#include <iostream>
using namespace std;

int main()
{
    double budget;
    string category;
    int people;
    
    cin >> budget >> category >> people;
    
    double transportBudgetCoefficient;
    
    if(people <= 4 && people >=1)
    {
        transportBudgetCoefficient = 0.75;    
    }
    else if(people >=5 && people <=9)
    {
        transportBudgetCoefficient = 0.6;
    }
    else if(people >= 10 && people <= 24)
    {
        transportBudgetCoefficient = 0.5;
    }
    else if(people >= 25 && people <= 49)
    {
        transportBudgetCoefficient = 0.4;
    }
    else
    {
        transportBudgetCoefficient = 0.25;
    }
    
    double transportBudget = budget * transportBudgetCoefficient;
    double ticketBudget;
    
    if(category == "VIP")
    {
        ticketBudget = people * 499.99;
    }
    else if(category == "Normal")
    {
        ticketBudget = people * 249.99;
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    if(budget - transportBudget >= ticketBudget)
    {
        cout << "Yes! You have " << (budget - transportBudget) - ticketBudget <<" leva left." << endl;
    }
    else
    {
        cout << "Not enough money! You need " << ticketBudget - (budget - transportBudget)  <<" leva." << endl;
    }
}