#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    double hours= 35.45, rate= 15.00, tolerance= 0.01000;

    cout << "Hours = " << hours << ", rate " << rate;
    cout << ", pay = " << hours * rate;
    cout << ", tolerance = " << tolerance << endl << endl;

    cout << scientific;

    cout << "Scientific notation : "<<endl;
    cout << "Hours = " << hours << "Rate = " << rate;
    cout << ",pay = "<<hours * rate;
    cout << ", tolerance = " << tolerance << endl << endl;

    cout << fixed;
    cout << "Fixed decimal notation : "<<endl;
    cout << "Hours = " << hours << "Rate = " << rate;
    cout << ",pay = "<<hours * rate;
    cout << ", tolerance = " << tolerance << endl << endl;

    //setprecision example

    cout << "Tolarance with setprecision = " << setprecision(2) << tolerance << endl;



    return 0;

}
