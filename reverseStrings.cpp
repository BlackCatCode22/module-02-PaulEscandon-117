#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a word or a sentence: "; // Prompt user for input

    std::string userInput;
    std::getline(std::cin, userInput); // Read user input including spaces

    for (int i = 0, length = userInput.length(); i < length / 2; ++i)
        std::swap(userInput[i], userInput[length - i - 1]); // Swap characters to reverse the string

    std::cout << "Reversed string: " << userInput << std::endl; // Display the reversed string

    return 0;
}
