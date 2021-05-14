#include <iostream>

int main() {
    std::cout << "You're the dumbest person on earth and need to enter the correct code to collect your booze";
    std::cout << std::endl;
    std::cout << "Enter the correct code to access the tavern...";
    std::cout << std::endl;

    const int a = 4;
    int b = 3;
    int c = 2;

    int sum = a + b + c;
    int prod = a * b * c;

    std::cout << sum << std::endl;
    std::cout << prod;

    return 0;
}