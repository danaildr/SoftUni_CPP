#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string length;
    getline(cin, length);
    string width;
    getline(cin, width);
    int pieces = stoi(length) * stoi(width);
    string input;
    getline(cin, input);
    while (input != "STOP")
    {
        int newPieces;
        newPieces = stoi(input);
        pieces = pieces - newPieces;
        if(pieces <= 0)
        {
            input = "STOP";
        }
        else
        {
            getline(cin, input);
        }
    }
    if(pieces > 0)
    {
        cout << pieces << " pieces are left." << endl;
    }
    else
    {
        cout << "No more cake left! You need " << abs(pieces) << " pieces more." << endl;
    }
    
}