#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;

    int p;
    int col1  = 2;
    int col23 = 9;

    cout << left  << setw(col1)  << "p"
         << right << setw(col23) << "p*5"
         << right << setw(col23) << "p*10" << "\n";

    p = 5;
    cout << left  << setw(col1)  << p
         << right << setw(col23) << p * 5
         << right << setw(col23) << p * 10 << "\n";

    p = 10;
    cout << left  << setw(col1)  << p
         << right << setw(col23) << p * 5
         << right << setw(col23) << p * 10 << "\n";

    p = 25;
    cout << left  << setw(col1)  << p
         << right << setw(col23) << p * 5
         << right << setw(col23) << p * 10 << "\n";

    p = 50;
    cout << left << setw(col1)   << p
         << right << setw(col23) << p * 5
         << right << setw(col23) << p * 10 << "\n";

    return 0;
}
