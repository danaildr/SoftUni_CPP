#include <iostream>
using namespace std;

int main()
{
    string word;
    getline(cin, word );
    int worldLength =  word.length();
    int sum =0;
    
    for(int i=0; i < worldLength; i++){
        
        if(word[i] == 'a' )
        {
            sum = sum + 1;
        }
        else if(word[i] == 'e')
        {
            sum = sum + 2;
        }
        else if(word[i] == 'i')
        {
            sum = sum + 3;
        }
        else if(word[i] == 'o')
        {
            sum = sum + 4;
        }
        else if(word[i] == 'u')
        {
            sum = sum + 5;
        }
    }
    cout << sum << endl;
}