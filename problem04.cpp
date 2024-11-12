#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter the first integer: ";
    long num1;
    cin >> num1;

    cout << "Enter the second integer: ";
    long num2;
    cin >> num2;

    long res;

    res = num1 + num2;
    cout << num1 << " + " << num2 << " = " << res << "\n";
    res = num1 - num2;
    cout << num1 << " - " << num2 << " = " << res << "\n";
    res = num1 * num2;
    cout << num1 << " * " << num2 << " = " << res << "\n";
    res = num1 / num2;
    cout << num1 << " / " << num2 << " = " << res << "\n";
    res = num1 % num2;
    cout << num1 << " % " << num2 << " = " << res << "\n";

    return 0;
}
