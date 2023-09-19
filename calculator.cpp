#include <iostream>

int main() {
    char operation;
    double num1, num2, result;

    // Get user input for the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Get user input for the operation (+, -, *, /)
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    // Get user input for the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform the selected operation and display the result
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            std::cout << "Error: Invalid operation." << std::endl;
            return 1; // Exit with an error code
    }

    // Display the result
    std::cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << std::endl;

    return 0;
}
