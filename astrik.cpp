#include <iostream>
#include <string>

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);  // Read the entire line including spaces

    // Replace each character with an asterisk
    for (char &c : input) {
        c = '*';
    }

    std::cout << "Modified string: " << input << std::endl;

    return 0;
}

