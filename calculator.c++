#include <iostream>

class Calculator {
public:
    inline double add(double a, double b) {
        return a + b;
    }

    inline double subtract(double a, double b) {
        return a - b;
    }

    inline double multiply(double a, double b) {
        return a * b;
    }

    inline double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cerr << "Error: Division by zero is not allowed." << std::endl;
            return 0; // Return zero or handle error appropriately
        }
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    int choice;

    std::cout << "Arithmetic Calculator" << std::endl;
    std::cout << "1. Add" << std::endl;
    std::cout << "2. Subtract" << std::endl;
    std::cout << "3. Multiply" << std::endl;
    std::cout << "4. Divide" << std::endl;
    std::cout << "Enter your choice (1/2/3/4): ";
    std::cin >> choice;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch (choice) {
        case 1:
            std::cout << "Result: " << calc.add(num1, num2) << std::endl;
            break;
        case 2:
            std::cout << "Result: " << calc.subtract(num1, num2) << std::endl;
            break;
        case 3:
            std::cout << "Result: " << calc.multiply(num1, num2) << std::endl;
            break;
        case 4:
            std::cout << "Result: " << calc.divide(num1, num2) << std::endl;
            break;
        default:
            std::cerr << "Invalid choice." << std::endl;
            break;
    }

    return 0;
}

