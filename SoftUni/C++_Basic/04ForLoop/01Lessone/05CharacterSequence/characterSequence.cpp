#include <iostream>
using namespace std;

int main()
{
    string word;
    getline(cin, word );
    int worldLength =  word.length();

    for(int i=0; i < worldLength; i++){
        cout << word[i] << endl;
    }
}
