#include <iostream>
using namespace std;

int main()
{
    int p1, p2, p3, p4, p5;
    p1 = p2 = p3 = p4 = p5 =0;
    
    int counter;
    cin >> counter;
    
    for(int i=0; i< counter; i++){
        int numb;
        cin >> numb;
        if(numb <200)
        {
            p1++;
        }
        else if(numb < 400 && numb >= 200)
        {
            p2++;
        }
        else if(numb < 600 && numb >= 400)
        {
            p3++;
        }
        else if(numb < 800 && numb >= 600)
        {
            p4++;
        }
        else
        {
            p5++;
        }
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << ((p1*1.0)/counter) * 100 << "%" << endl;
    cout << ((p2*1.0)/counter) * 100 << "%" << endl;
    cout << ((p3*1.0)/counter) * 100 << "%" << endl;
    cout << ((p4*1.0)/counter) * 100 << "%" << endl;
    cout << ((p5*1.0)/counter) * 100 << "%" << endl;
}