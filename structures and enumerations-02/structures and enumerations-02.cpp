#include <iostream>
#include <Windows.h> 

struct Account
{
    int accNumber;
    std::string name;
    float cash;    
};
void newBalance(Account& account, float newCash) {
    account.cash = newCash;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Account account;

    std::cout << "Введите номер счета: ";
    std::cin >> account.accNumber;

    std::cout << "Введите имя владельца: ";
    std::cin >> account.name;

    std::cout << "Введите баланс: ";
    std::cin >> account.cash;

    std::cout << "Введите новый баланс: ";
    float cash1;
    std::cin >> cash1;
    newBalance(account, cash1);    

    std::cout << "Ваш счет: " << account.name << ", " << account.accNumber << ", "
        << account.cash;

    return 0;
    }






