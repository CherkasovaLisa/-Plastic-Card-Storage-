#include <iostream>
#include <locale>
#include "BasePlasticCard.h"
#include "BaseBankingCard.h"
#include "DebitCard.h"
#include "CreditCard.h"
#include "BasePassKey.h"
#include "AccessKey.h"
#include "Ticket.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "=== Банковские карты ===" << std::endl;

    // Дебетовая карта: ФИО + депозит 10000 по умолчанию
    DebitCard debit("Иванов Иван Иванович");
    debit.printInfo();

    std::cout << "\nПопытка установить отрицательный депозит..." << std::endl;
    debit.setDeposit(-500);   // должно быть отклонено (депозит не < 0)
    debit.printInfo();

    // Кредитная карта: депозит 100000 по умолчанию
    CreditCard credit("Петров Петр Петрович");
    credit.printInfo();

    std::cout << "\nСписание за обслуживание кредитной карты..." << std::endl;
    credit.Service();          // снимает процент за обслуживание
    credit.printInfo();

    std::cout << "\n=== Пропуска ===" << std::endl;

    // Пропуск доступа: фиксирует время прохода
    AccessKey accessKey(1, "Сидоров Сидор Сидорович", "ООО Ромашка");
    accessKey.Pass();

    // Билет: при проходе списывает 75 единиц с депозита
    Ticket ticket(2, "Кузнецова Анна Сергеевна", "Театр");
    ticket.printInfo();
    ticket.Pass();
    ticket.printInfo();

    return 0;
}