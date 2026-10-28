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

    // Инициализируем генератор случайных чисел (обязательно!)
    InitRandom();

    std::cout << "=== Банковские карты ===" << std::endl;

    // Дебетовая карта: ФИО и пин-код
    DebitCard debit("Иванов Иван Иванович", "1234");

    // Выводим информацию через геттеры
    std::cout << "Номер: " << debit.GetNumber() << std::endl;
    std::cout << "CVC: " << debit.GetCvc() << std::endl;
    std::cout << "Владелец: " << debit.GetOwnerName() << std::endl;
    std::cout << "Депозит: " << debit.GetDeposit() << " р." << std::endl;

    std::cout << "\nПопытка установить отрицательный депозит..." << std::endl;
    debit.SetDeposit(-500); // Должно вывести ошибку
    std::cout << "Текущий депозит: " << debit.GetDeposit() << " р." << std::endl;


    // Кредитная карта: ФИО и пин-код
    CreditCard credit("Петров Петр Петрович", "5678");

    std::cout << "\nНомер: " << credit.GetNumber() << std::endl;
    std::cout << "CVC: " << credit.GetCvc() << std::endl;
    std::cout << "Владелец: " << credit.GetOwnerName() << std::endl;
    std::cout << "Депозит: " << credit.GetDeposit() << " р." << std::endl;

    std::cout << "\nСписание 1% за обслуживание кредитной карты..." << std::endl;
    credit.Service(1.0); // Передаем 1% (метод требует аргумент)

    std::cout << "\n=== Пропуска ===" << std::endl;

    // Пропуск доступа (ID генерируется автоматически в конструкторе)
    AccessKey accessKey("Сидоров Сидор Сидорович", "ООО Ромашка");
    std::cout << "\nВызов AccessKey::Pass():" << std::endl;
    accessKey.Pass(); // Выведет время прохода

    // Билет
       // Билет
    Ticket ticket("Кузнецова Анна Сергеевна", "Театр", 500.0); // <--- Добавили 500.0
    std::cout << "Начальный депозит билета: " << ticket.GetDeposit() << std::endl;

    std::cout << "\nВызов Ticket::Pass():" << std::endl;
    ticket.Pass(); // Спишет 75 единиц

    std::cout << "Остаток после прохода: " << ticket.GetDeposit() << std::endl;
}