#include <iostream>
using namespace std;

int main()
{
    int groupNumber;
    cin >> groupNumber;
    double p1, p2, p3, p4, p5;
    p1 = p2 = p3 = p4 = p5 = 0.0;
    int allClimber =0;

    for(int i=0; i < groupNumber; i++)
    {
        int climber;
        cin >> climber;
        allClimber = allClimber + climber;
        if(climber <= 5)
        {
            p1 = p1 + climber;
        }
        else if(climber >=6 && climber <= 12)
        {
            p2 = p2 + climber;
        }
        else if(climber >=13 && climber <= 25)
        {
            p3 = p3 + climber;
        }
        else if(climber >=2 && climber <= 40)
        {
            p4 = p4 + climber;
        }
        else
        {
            p5 = p5 + climber;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << ((p1*1.0)/allClimber) * 100 << "%" << endl;
    cout << ((p2*1.0)/allClimber) * 100 << "%" << endl;
    cout << ((p3*1.0)/allClimber) * 100 << "%" << endl;
    cout << ((p4*1.0)/allClimber) * 100 << "%" << endl;
    cout << ((p5*1.0)/allClimber) * 100 << "%" << endl;
}