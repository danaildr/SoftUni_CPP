#include <iostream>
using namespace std;

int main()
{
    int width, length, height;
    cin >> width >> length >> height;
    int value = width * length * height;
    string strinput;
    cin >> strinput;
    while (strinput != "Done")
    {
        int numberOfBox = stoi(strinput);
        if(value - numberOfBox > 0){
            value = value - numberOfBox;
            cin >> strinput;
        }else{
            cout << "No more free space! You need " << numberOfBox - value << " Cubic meters more." << endl;
            strinput = "Done";
            value = value - numberOfBox;
        }
    }
    if(value > 0)
    {
        cout << value <<" Cubic meters left." << endl;
    }
}