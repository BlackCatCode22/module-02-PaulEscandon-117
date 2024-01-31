#include <iostream>

int main() {
    // Prompt the user to enter three integers
    std::cout << "Enter three integers: ";

    int num1, num2, num3;

    // Read user input
    std::cin >> num1 >> num2 >> num3;

    // Using compound test statements to determine the largest integer
    if (num1 >= num2 && num1 >= num3) {
        std::cout << "The largest integer is: " << num1 << std::endl;
    } else if (num2 >= num1 && num2 >= num3) {
        std::cout << "The largest integer is: " << num2 << std::endl;
    } else {
        std::cout << "The largest integer is: " << num3 << std::endl;
    }

    return 0;
}
