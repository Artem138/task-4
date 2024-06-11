#include <iostream>

int main()
{
    std::cout << "How old are you?\n";

    unsigned int age{}; // Изменили тип на unsigned int
    std::cin >> age;

    std::cout << "Allowed to drive a car in Texas [ "; // Добавили пробел после "Texas"

    if (age >= 16) // Исправили условие на 16 лет
        std::cout << "x";
    else
        std::cout << " ";

    std::cout << "]\n";

    return 0;
}
