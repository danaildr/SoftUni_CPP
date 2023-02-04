#include <iostream>

using namespace std;
int main()
{
    string name;
    getline(cin, name);
    
    string pointsAsString;
    getline(cin, pointsAsString);
    double points  = stod(pointsAsString); 
    
    string counterAsString;
    getline(cin, counterAsString);
    int counter = stoi(counterAsString); 
    
    for(int i=0; i< counter; i++)
    {
        string voteName;
        getline(cin, voteName);
        string newPointsAsString;
        getline(cin, newPointsAsString);
        int nameLenth = voteName.length();
        
        double newPoints = (stod(newPointsAsString) * nameLenth)/2.0;
        
        points = points + newPoints;
        
        cout.setf(ios::fixed);
        cout.precision(1);
    
        if(points > 1250.5)
        {
            cout << "Congratulations, " << name <<" got a nominee for leading role with " << points << "!" << endl;
            break;
        }
    }
    cout.setf(ios::fixed);
    cout.precision(1);
    
    if(points <= 1250.5)
    {
        cout << "Sorry, " << name << " you need " << 1250.5 - points << " more!" << endl;
    }
}
