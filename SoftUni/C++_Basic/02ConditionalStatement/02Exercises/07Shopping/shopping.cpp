#include <iostream>
using namespace std;

int main()
{
    double budget;
    cin >> budget;

    int gpuNumber, cpuNumber, ramNumber;
    cin >> gpuNumber >> cpuNumber >> ramNumber;

    int gpuPrice = gpuNumber * 250;
    double cpuPriceForOne = gpuPrice * 0.35;
    double ramPriceForOne = gpuPrice * 0.1;
    double cpuPrice = cpuNumber * cpuPriceForOne;
    double ramPrice = ramNumber * ramPriceForOne;

    double finalPrice = gpuPrice + cpuPrice + ramPrice;
    
    if(gpuNumber > cpuNumber)
    {
        finalPrice = finalPrice * 0.85;
    }
    double leftOver = budget - finalPrice;

    cout.setf(ios::fixed);
    cout.precision(2);

    if(leftOver >=0)
    {
        cout << "You have " << leftOver << " leva left!" << endl;
    }
    else
    {
        cout << "Not enough money! You need " << leftOver * (-1) << " leva more!" << endl;
    }
}