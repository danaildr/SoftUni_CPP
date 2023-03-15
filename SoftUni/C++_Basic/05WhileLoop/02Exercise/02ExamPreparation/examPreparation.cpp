#include <iostream>
using namespace std;

int main()
{
    int inputOfBadGrades, counterForBadGrades, counterForGrades;
    string input;
    getline(cin, input);
    inputOfBadGrades = stoi(input);

    counterForBadGrades = counterForGrades =0;
    double sumOfGrades = 0;
    string lastProblem;

    while (counterForBadGrades < inputOfBadGrades)
    {
        string nameOfProblem;
        getline(cin, nameOfProblem);
        if(nameOfProblem != "Enough")
        {
            string problemGradeString;
            getline (cin, problemGradeString);
            double problemGrade = stod(problemGradeString);

            if (problemGrade <= 4)
            {
                counterForBadGrades++;
            }
            counterForGrades++;
            sumOfGrades = sumOfGrades + problemGrade;
            lastProblem = nameOfProblem;
        }
        else{
            break;
        }       
    }
    if(counterForBadGrades == inputOfBadGrades)
    {
        cout << "You need a break, " << counterForBadGrades <<" poor grades." << endl;
    }
    else
    {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Average score: " << sumOfGrades / counterForGrades << endl;
        cout << "Number of problems: " << counterForGrades << endl;
        cout << "Last problem: " << lastProblem << endl;
    }
}