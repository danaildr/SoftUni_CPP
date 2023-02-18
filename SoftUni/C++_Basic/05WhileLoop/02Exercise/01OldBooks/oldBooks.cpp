#include <iostream>
using namespace std;

int main()
{
    string book;
    getline(cin, book);
    int checkedBooks = 0;
    int findBook =0;
    while(true)
    {
        string input;
        getline(cin, input);
        checkedBooks++;
        if(input == "No More Books")
        {
            break;
        }
        else if(input == book)
        {
            findBook =1;
            break;
        }
    }
    if(findBook == 0)
    {
        cout << "The book you search is not here!"<<endl;
        cout <<  "You checked "<< checkedBooks -1 <<" books." << endl;
    }
    else
    {
        cout << "You checked "<<checkedBooks -1 <<" books and found it." << endl;
    }
}