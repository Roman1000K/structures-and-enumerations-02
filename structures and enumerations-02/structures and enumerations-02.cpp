#include <iostream>
#include <Windows.h> 

struct account
{
    int accNumber;
    std::string name;
    float cash;    
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    account account1;

    std::cout << "Введите номер счета: ";
    std::cin >> account1.accNumber;
    std::cout << "Введите имя владельца: ";
    std::cin >> account1.name;
    std::cout << "Введите баланс: ";
    std::cin >> account1.cash;
    std::cout << "Введите новый баланс: ";
    float cash1;
    std::cin >> cash1;

    account1.cash = cash1;

    std::cout << "Ваш счет: " << account1.name << ", " << account1.accNumber << ", "
        << account1.cash;
    }

