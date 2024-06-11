#include <iostream>
#include <cctype>

int main() {
    double num1, num2;
    char op;

    // Ввод первого числа
    std::cout << "Enter a double value: ";
    std::cin >> num1;

    // Ввод второго числа
    std::cout << "Enter a double value: ";
    std::cin >> num2;

    // Ввод оператора
    std::cout << "Enter one of the following: +, -, *, or /: ";
    std::cin >> op;

    // Проверка оператора
    if (std::tolower(op) == '+') {
        std::cout << num1 << " + " << num2 << " is " << num1 + num2 << std::endl;
    }
    else if (std::tolower(op) == '-') {
        std::cout << num1 << " - " << num2 << " is " << num1 - num2 << std::endl;
    }
    else if (std::tolower(op) == '*') {
        std::cout << num1 << " * " << num2 << " is " << num1 * num2 << std::endl;
    }
    else if (std::tolower(op) == '/') {
        if (num2 != 0) {
            std::cout << num1 << " / " << num2 << " is " << num1 / num2 << std::endl;
        }
        else {
            std::cout << "Error: Division by zero!" << std::endl;
        }
    }
    else {
        std::cout << "Error: Invalid operator!" << std::endl;
    }

    return 0;
}
