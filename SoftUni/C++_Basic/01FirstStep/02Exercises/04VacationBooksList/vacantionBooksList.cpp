#include <iostream>
using namespace std;

int main()
{
    int booksPages;
    cin >> booksPages;

    int  pagesPerHour;
    cin >> pagesPerHour;

    int numberOfDays;
    cin >> numberOfDays;

    int hoursPerDay = (booksPages/pagesPerHour)/numberOfDays;

    cout << hoursPerDay << endl;

}