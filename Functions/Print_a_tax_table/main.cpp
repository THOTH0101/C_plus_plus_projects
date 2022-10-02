#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double computeTax(int status, double taxableIncome);//function prototype

int main()
{
    //title header
    cout << "Taxable\t\t\t\t\tMarried Joint or\t\t\tMarried\t\t\tHead of\n";
    cout << "Income\t\tSingle\t\tQualifying Window(er)\t\tSeparate\t\ta House" << endl;

    //loop for computing tax
    for(int i = 50000; i <= 60000; i+=50)
    {
        cout << i << setw(4) << "\t\t";

        //compute tax for each status
        for(int status = 0; status < 4; status++)
        {
            if(status == 0)
                cout << computeTax(status, i) << setw(4) << "\t\t";
            else if(status == 1)
                cout << computeTax(status, i) << setw(4) << "\t\t\t\t\t";
            else if(status == 2)
                cout << "\t" << computeTax(status, i) << setw(4) << "\t\t";
            else
                cout << "\t" << computeTax(status, i) << setw(4);
        }
        cout << endl;
    }
    return 0;
}

double computeTax(int status, double taxableIncome)
{
    double tax;
    //tax compute for each status
    switch (status)
    {
        case 0:
            tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (taxableIncome - 33950) * 0.25;
            return ceil(tax);
            case 1:
                tax = 16700 * 0.10 + (taxableIncome - 16700) * 0.15;
                return ceil(tax);
                case 2:
                    tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (taxableIncome - 33950) * 0.25;
                    return ceil(tax);
                    case 3:
                        tax = 11950 * 0.10 + (45500 - 11950) * 0.15 + (taxableIncome - 45500) * 0.25;
                        return ceil(tax);
        default:
            return 0;
    }
}