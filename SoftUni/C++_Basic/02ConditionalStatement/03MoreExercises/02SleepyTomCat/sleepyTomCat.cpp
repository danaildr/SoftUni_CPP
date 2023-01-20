#include <iostream>

using namespace std;

int main()
{
    int timeOffDays;
    cin >> timeOffDays;
    
    int gameTime = timeOffDays * 127 + (365 - timeOffDays) * 63;
    
    if(gameTime > 30000)
    {
        cout << "Tom will run away" << endl;
        cout << (gameTime - 30000) / 60 <<" hours and " << (gameTime - 30000) % 60 << " minutes more for play" << endl;
        
    }
    else
    {
        cout << "Tom sleeps well" << endl;
        cout << (30000 - gameTime) / 60 <<" hours and " << (30000 - gameTime) % 60<< " minutes less for play" << endl;
    }
    
}