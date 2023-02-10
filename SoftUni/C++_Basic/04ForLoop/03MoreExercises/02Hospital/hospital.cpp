#include <iostream>
using namespace std;

int main()
{
    int dayPeriod;
    cin >> dayPeriod;
    int treatedPatient, untreatedPatient;
    treatedPatient = untreatedPatient = 0;
    int doctors = 7;
    for(int i=1; i<=dayPeriod; i++)
    {
        if(i % 3 == 0 && untreatedPatient > treatedPatient)
        {
            doctors +=1;
        }
        int patients;
        cin >> patients;
        if(patients > doctors)
        {
            treatedPatient +=doctors;
            untreatedPatient += (patients - doctors);
            
        }
        else
        {
            treatedPatient +=patients;
        }
    }
    cout << "Treated patients: " << treatedPatient <<"." << endl;
    cout << "Untreated patients: " << untreatedPatient <<"." << endl;
}