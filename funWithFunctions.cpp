#include <iostream>

int getAnIntFromTheUser() { std::cout << "Enter an integer: "; int userInt; std::cin >> userInt; return userInt; } // Func to get int from user.

int compareTwoInts(int a, int b) { return (a > b) ? a : b; } // Func to compare two ints and return larger one.

int sumTwoInts(int a, int b) { return a + b; } // Func to sum two ints and return result

int main() {

    int firstInt = getAnIntFromTheUser(), secondInt = getAnIntFromTheUser(); // Get two ints from user

    std::cout << "The larger integer is: " << compareTwoInts(firstInt, secondInt) << std::endl; // Display result of comparing two ints

    std::cout << "The sum of the two integers is: " << sumTwoInts(firstInt, secondInt) << std::endl; // Display result of summing two ints

    return 0;
}
