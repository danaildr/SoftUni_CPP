#include <iostream>
using namespace std;

int main()
{
    int numJury;
    string firstInput;
    getline(cin, firstInput);
    numJury = stoi(firstInput);

    string input;
    getline(cin, input);
    int countPresentation;
    countPresentation =0;
    double sumAllStudentsEvaluation;
    sumAllStudentsEvaluation = 0.0;
    cout.setf(ios::fixed);
    cout.precision(2);
    while (input != "Finish")
    {
        string presentation, midleInput;
        presentation = input;
        double evaluation, sumEvaluation;
        evaluation = sumEvaluation =0.0;
        for(int i=0; i < numJury; i++)
        {
            getline(cin, midleInput);
            evaluation = stod(midleInput);
            sumEvaluation = sumEvaluation + evaluation;
        }
        double averageEvaluation;
        averageEvaluation = sumEvaluation / numJury ;
        cout << presentation <<" - "<< averageEvaluation <<"." <<endl;
        sumAllStudentsEvaluation = sumAllStudentsEvaluation + averageEvaluation;
        countPresentation++;
        getline(cin, input);
    }
    cout << "Student's final assessment is "<< sumAllStudentsEvaluation / countPresentation <<"." << endl;
    
}