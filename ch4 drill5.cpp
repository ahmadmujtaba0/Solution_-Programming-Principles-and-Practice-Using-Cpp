#include<iostream>
using namespace std;
int main() 
{
    cout << "Enter two double values \n";

    double val1, val2;
    while (cin >> val1 >> val2)
    {
        if (val1 == val2)
        {
            cout << "The numbers are equal.\n";
        }
        else if (val1 < val2)
        {
            cout << "The smaller value is: " << val1 << '\n';
            cout << "The larger value is: " << val2 << '\n';
        }
        else
        {
            cout << "The smaller value is: " << val2 << '\n';
            cout << "The larger value is: " << val1 << '\n';
        }
        double diff = val1 - val2;
        if (-1.0/100 < diff < 1.0/100 )
        {
            cout << "The numbers are almost equal.\n";
        }
    }

    return 0;
}