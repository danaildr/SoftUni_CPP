#include <iostream>
using namespace std;

int main()
{
    string input=" ";
    int steps = 0;
    while (input!="stop")
    {
        int newSteps;
        getline(cin, input);
        if(input == "Going home")
        {
            getline(cin, input);
            newSteps = stoi(input);
            steps = steps + newSteps;
            input = "stop";
        }
        else
        {
            newSteps = stoi(input);
            steps = steps + newSteps;
        }
        if(steps >= 10000)
        {
            input = "stop";
        }
    }
    if(steps >= 10000)
    {
        cout << "Goal reached! Good job!" << endl;
    }
    else
    {
        cout << 10000 - steps << " more steps to reach goal." <<endl;
    }
}