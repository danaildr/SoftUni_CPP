#include <iostream>
using namespace std;
int main()
{
    string architectName;
    cin >> architectName;
    int projectsNumber;
    cin >> projectsNumber;
    
    cout << "The architect " << architectName << " will need " << projectsNumber * 3 <<" hours to complete " << projectsNumber <<" project/s.";
        
}