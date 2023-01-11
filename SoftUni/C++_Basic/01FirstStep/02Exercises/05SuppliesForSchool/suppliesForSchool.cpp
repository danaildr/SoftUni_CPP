#include <iostream>
using namespace std;

int main()
{
    int numberOfPens;
    cin >> numberOfPens;

    int numberOfMarkers;
    cin >> numberOfMarkers;

    int litersOfCleaningAgents;
    cin >>litersOfCleaningAgents;

    int percentOfDiscount;
    cin >> percentOfDiscount;

    double sum = (numberOfPens * 5.80 + numberOfMarkers * 7.20 + litersOfCleaningAgents * 1.20);
    double discount = sum * percentOfDiscount/100;
    double finaleSum = sum - discount;

    cout << finaleSum << endl;
}