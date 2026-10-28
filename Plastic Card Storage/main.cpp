#include <iostream>
#include <locale>
#include "CardDataGenerator.h"
#include "DebitCard.h"
#include "CreditCard.h"
#include "AccessKey.h"
#include "Ticket.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    // Инициализируем генератор случайных чисел
    InitRandom();

    std::cout << "=== Банковские карты ===" << std::endl;

    // Дебетовая карта
    DebitCard debit("Иванов Иван Иванович", "1234");

    std::cout << "Номер: " << debit.GetNumber() << std::endl;
    std::cout << "CVC: " << debit.GetCvc() << std::endl;
    std::cout << "Владелец: " << debit.GetOwnerName() << std::endl;
    std::cout << "Депозит: " << debit.GetDeposit() << " р." << std::endl;

    std::cout << "\nПопытка установить отрицательный депозит..." << std::endl;
    debit.SetDeposit(-500); // Должно вывести ошибку
    std::cout << "Текущий депозит: " << debit.GetDeposit() << " р." << std::endl;


    // Кредитная карта
    CreditCard credit("Петров Петр Петрович", "5678");

    std::cout << "\nНомер: " << credit.GetNumber() << std::endl;
    std::cout << "CVC: " << credit.GetCvc() << std::endl;
    std::cout << "Владелец: " << credit.GetOwnerName() << std::endl;
    std::cout << "Депозит: " << credit.GetDeposit() << " р." << std::endl;

    std::cout << "\nСписание 1% за обслуживание кредитной карты..." << std::endl;
    credit.Service(1.0); // Передаем 1%


    std::cout << "\n=== Пропуска ===" << std::endl;

    // Пропуск доступа (только ФИО и организация, как в вашем классе)
    AccessKey accessKey("Сидоров Сидор Сидорович", "ООО Ромашка");
    std::cout << "\nВызов AccessKey::Pass():" << std::endl;
    accessKey.Pass();

    // Билет (ФИО, организация, начальный депозит)
    Ticket ticket("Кузнецова Анна Сергеевна", "Театр", 500.0);
    std::cout << "\nНачальный депозит билета: " << ticket.GetDeposit() << std::endl;
    std::cout << "Вызов Ticket::Pass():" << std::endl;
    ticket.Pass();
    std::cout << "Остаток после прохода: " << ticket.GetDeposit() << std::endl;

    return 0;
}