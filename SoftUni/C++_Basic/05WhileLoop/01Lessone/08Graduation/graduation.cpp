#include <iostream>
using namespace std;

int main()
{
    int classes, fals;
    classes = 1;
    fals = 0;
    string name;
    double rating;
    cin >> name;
    double allRating = 0.0;
    
    while (classes <= 12)
    {
        double classRating;
        cin >> classRating;

        if(classRating < 4.00)
        {
            if(fals == 1)
            {
                fals++;
                break;
            }
            fals++;
            continue;
        }
        allRating = allRating + classRating;
        classes++;
    }
    if(fals == 2)
    {
        cout << name << " has been excluded at " << classes << " grade" << endl;
    }
    else
    {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << name <<" graduated. Average grade: "<< allRating/12 << endl;

    }
}