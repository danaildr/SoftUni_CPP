#include <iostream>
using namespace std;

int main()
{
    int counter, salary;
    cin >> counter >> salary;
    
    for(int i=0; i < counter; i++)
    {
        string website;
        cin >> website;
        if(website == "Facebook")
        {
            salary = salary -150;
        }
        else if(website == "Instagram")
        {
            salary = salary -100;
        }
        else if(website == "Reddit")
        {
            salary = salary - 50;
        }
        if(salary <=0)
        {
            cout << "You have lost your salary." <<endl;
            break;
        }
    }
    if(salary >0)
    {
        cout << salary << endl;
    }
}