#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string figureName;
    cin >> figureName;

    double area;

    if(figureName == "square")
    {
        double side;
        cin >> side;
        area = side * side;
    }
    else if(figureName == "rectangle")
    {
        double sideA, sideB;
        cin >> sideA >> sideB;

        area = sideA * sideB;
    }
    else if(figureName == "circle")
    {
        double circleRadius;
        cin >> circleRadius;

        area = M_PI * circleRadius * circleRadius;
    }
    else if(figureName == "triangle")
    {
        double side, height;
        cin >> side >> height;

        area = (side * height)/2;
    }

    cout.setf(ios::fixed);
    cout.precision(3);
    cout << area << endl;
}