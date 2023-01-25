#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    string actionOperator;
    

    cin >> n1 >> n2 >> actionOperator;

    

    if(actionOperator == "+" || actionOperator == "-" || actionOperator =="*" )
    {
        int result;
        string isEven;

        if(actionOperator == "+")
        {
            result = n1 + n2;
        }
        else if(actionOperator == "-")
        {
            result = n1 -n2;
        }
        else
        {
            result = n1 * n2;
        }

        if(result %2 == 0)
        {
             isEven = "even";
        }
        else
        {
            isEven = "odd";
        }

        cout << n1 << " " << actionOperator << " " << n2 << " = " << result <<" - " << isEven << endl;
    }
    else if ((actionOperator == "/" || actionOperator == "%") && n2 != 0)
    {
        double result;
        if(actionOperator == "/")
        {
            result = (n1 * 1.0) / n2;
            cout.setf(ios::fixed);
            cout.precision(2);
        }
        else 
        {
            result = n1 % n2;
        }
        

        cout << n1 << " " << actionOperator << " " << n2 << " = " << result << endl;
    }
    else if((actionOperator == "%" || actionOperator == "/") && n2 == 0)
    {
        cout << "Cannot divide " << n1 << " by zero" << endl;
    }
}