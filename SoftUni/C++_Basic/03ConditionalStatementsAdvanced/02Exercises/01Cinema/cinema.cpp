#include <iostream>

using namespace std;

int main()
{
    string projectionType;
    int row, collumn;
    cin >> projectionType >> row >> collumn;
    
    double ticketPrice;
    
    if(projectionType == "Premiere")
    {
        ticketPrice = 12.00;
    }
    else if(projectionType == "Normal")
    {
        ticketPrice = 7.50;
    }
    else if(projectionType == "Discount")
    {
        ticketPrice = 5.00;
    }
    
    double price = row * collumn * ticketPrice;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << price << " leva" << endl;

    return 0;
}
