#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    cout << "Enter the first double: ";
    double num1;
    cin >> num1;

    cout << "Enter the second double: ";
    double num2;
    cin >> num2;

    double sum  = num1 + num2;
    double diff = num1 - num2;
    double prod = num1 * num2;
    double quot = num1 / num2;
    double mod  = fmod(num1, num2);
    cout << num1 << " + " << num2 << " = " << sum  << "\n"
         << num1 << " - " << num2 << " = " << diff << "\n"
         << num1 << " * " << num2 << " = " << prod << "\n"
         << num1 << " / " << num2 << " = " << quot << "\n"
         << num1 << " % " << num2 << " = " << mod  << "\n";

    return 0;
}
