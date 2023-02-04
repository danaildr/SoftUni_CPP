#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int tournamentNumber;
    int startingPoints;
    int winningTournament = 0;
    cin >> tournamentNumber >> startingPoints;
    int points = startingPoints;

    for(int i=0; i<tournamentNumber; i++)
    {
        string result;
        cin >> result;
        if(result == "W")
        {
            winningTournament +=1;
            points = points + 2000;
        }
        else if(result == "F")
        {
            points = points + 1200;
        }
        else if(result == "SF")
        {
            points = points + 720;
        }
    }

    cout << "Final points: " << points << endl;
    cout << "Average points: " << round((points - startingPoints) / tournamentNumber) << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << (winningTournament* 1.0 / tournamentNumber) * 100 << "%" << endl;
}