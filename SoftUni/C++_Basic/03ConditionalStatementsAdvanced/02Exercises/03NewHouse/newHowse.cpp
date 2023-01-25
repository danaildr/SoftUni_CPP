#include <iostream>
using namespace std;

int main()
{
    string flowers;
    int numberOfFlawers, budget;

    cin >> flowers >> numberOfFlawers >> budget;

    double rosePrice = 5.0;
    double dhaliaPrice = 3.80;
    double tulipPrice = 2.80;
    double narcissusPrice = 3.0;
    double gladiolusPrice = 2.50;
    double finalPrice = 0.0;

    if(flowers ==  "Roses")
    {
        finalPrice = numberOfFlawers * rosePrice;
        if(numberOfFlawers > 80)
        {
            finalPrice = finalPrice * 0.9;
        }
    }
    else if(flowers == "Dahlias")
    {
        finalPrice = numberOfFlawers * dhaliaPrice;
        if(numberOfFlawers > 90)
        {
            finalPrice = finalPrice * 0.85;
        }
    }
    else if (flowers == "Tulips")
    {
        finalPrice = numberOfFlawers * tulipPrice;
        if(numberOfFlawers > 80)
        {
            finalPrice = finalPrice * 0.85;
        }
    }
    else if(flowers == "Narcissus")
    {
        finalPrice = numberOfFlawers * narcissusPrice;
        if(numberOfFlawers < 120)
        {
            finalPrice = finalPrice * 1.15;
        }
    }
    else if(flowers == "Gladiolus")
    {
        finalPrice = numberOfFlawers * gladiolusPrice;
        if(numberOfFlawers < 80)
        {
            finalPrice = finalPrice * 1.2;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if(finalPrice <= budget)
    {
        cout << "Hey, you have a great garden with " << numberOfFlawers << " " << flowers << " and " << budget - finalPrice << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money, you need " << finalPrice - budget << " leva more." << endl;
    }


}


