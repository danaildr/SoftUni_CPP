#include <iostream>
using namespace std;

int main()
{
    int nilonArea;
    cin >> nilonArea;
    
    int litersPaint;
    cin >> litersPaint;
    double finalePaintLiters = litersPaint * 1.1;

    int diluent;
    cin >> diluent;

    int hoursToWork;
    cin >> hoursToWork;

    double sumForMaterials = (nilonArea +2) * 1.50 + finalePaintLiters * 14.50 + diluent * 5.00 + 0.40;
    double sumForWorkers = (sumForMaterials * 0.3) * hoursToWork;
    double finaleSum = sumForMaterials + sumForWorkers;

    cout << finaleSum << endl;
}