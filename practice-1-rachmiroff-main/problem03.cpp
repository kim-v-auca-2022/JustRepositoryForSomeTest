#include <iostream>
#include <string>

int main()
{
    std::cout << "What is your name? ";
    std::string full_name;
    std::getline(std::cin, full_name);
    std::cout << "Hello, " << full_name << "!\n";

    return 0;
}
