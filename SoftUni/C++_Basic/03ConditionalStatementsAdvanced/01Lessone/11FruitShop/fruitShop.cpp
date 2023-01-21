#include <iostream>
using namespace std;

int main()
{
    
    string product, day;
    double value;
    cin >> product >> day >> value;


    cout.setf(ios::fixed);
    cout.precision(2);


    if(day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
       if(product == "banana")
       {
            cout << value * 2.5 << endl;
       }
       else if(product == "apple") 
       {
            cout << value * 1.2 << endl;
       }
       else if(product == "orange")
       {
            cout << value * 0.85 << endl;
       }
       else if(product == "grapefruit")
       {
            cout << value * 1.45 << endl;
       }
       else if(product == "kiwi")
       {
            cout << value * 2.7 << endl;
       }
       else if(product == "pineapple")
       {
            cout << value * 5.5 << endl;
       }
       else if(product == "grapes")
       {
                cout << value * 3.85 << endl;
       }
       else
       {
            cout << "error" << endl;
       }
    }
    else if(day == "Saturday" || day == "Sunday")
    {
        if(product == "banana")
       {
            cout << value * 2.7 << endl;
       }
       else if(product == "apple") 
       {
            cout << value * 1.25 << endl;
       }
       else if(product == "orange")
       {
            cout << value * 0.9 << endl;
       }
       else if(product == "grapefruit")
       {
            cout << value * 1.60 << endl;
       }
       else if(product == "kiwi")
       {
            cout << value * 3.0 << endl;
       }
       else if(product == "pineapple")
       {
            cout << value * 5.6 << endl;
       }
       else if(product == "grapes")
       {
                cout << value * 4.2 << endl;
       }
       else
       {
            cout << "error" << endl;
       }
    }
    else
    {
        cout << "error" << endl;
    }
}