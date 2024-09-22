#include <iostream>

class NumberUtils {
public:
    inline int max(int a, int b, int c) {
        return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    }
};

int main() {
    NumberUtils utils;
    int num1, num2, num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    int largest = utils.max(num1, num2, num3);

    std::cout << "The largest number is: " << largest << std::endl;

    return 0;
}

