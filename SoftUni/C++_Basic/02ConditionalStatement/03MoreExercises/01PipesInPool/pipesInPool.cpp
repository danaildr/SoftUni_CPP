#include <iostream>

using namespace std;

int main()
{
    int poolValue, debitP1, debitP2;
    double hoursAbsence;
    cin >> poolValue >> debitP1 >> debitP2 >> hoursAbsence;
    
    double p1Value = debitP1 * hoursAbsence;
    double p2Value = debitP2 * hoursAbsence;
    double fullValue = p1Value + p2Value;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    if(fullValue <= poolValue)
    {
        double percentOfFullValue = (fullValue / poolValue) * 100;
        double p1Percent = (p1Value / fullValue) * 100 ;
        double p2Percent = (p2Value / fullValue) * 100;
        cout << "The pool is "<< percentOfFullValue <<"% full. Pipe 1: " << p1Percent << "%. Pipe 2: " << p2Percent << "%." << endl ;
    }
    else
    {
        double extraLiters = fullValue - poolValue;
        cout << "For " << hoursAbsence << " hours the pool overflows with "<< extraLiters <<" liters." << endl;
    }
    
}