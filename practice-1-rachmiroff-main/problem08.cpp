#include <iostream>
#include <cmath>

int main()
{
    double sum = (1.0 + 1.0/4.0 + 1.0/9.0 + 1.0/16.0 + 1.0/25.0);
    double pi1 = std::sqrt(6.0 * sum);
    double pi2 = std::sqrt(6.0 * (sum + 1.0/36.0));
    std::cout << pi1 << "\n" << pi2;

    return 0;
}
