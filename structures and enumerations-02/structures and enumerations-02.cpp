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

    std::cout << "Введите номер счета: ";
    int accNumber;
    std::cin >> accNumber;
    std::cout << "Введите имя владельца: ";
    std::string name;
    std::cin >> name;
    std::cout << "Введите баланс: ";
    float cash;
    std::cin >> cash;
    std::cout << "Введите новый баланс: ";
    float cash1;
    std::cin >> cash1;

    account account1 = { accNumber, name, cash };

    account1.cash = cash1;

    std::cout << "Ваш счет: " << account1.name << ", " << account1.accNumber << ", "
        << account1.cash;
    }

