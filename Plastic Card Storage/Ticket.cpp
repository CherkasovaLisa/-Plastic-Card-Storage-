#include "Ticket.h"
#include <iostream>

Ticket::Ticket(std::string fio, std::string org, double initialDeposit)
    : BasePassKey(fio, org)
    , deposit(initialDeposit)
{
}

bool Ticket::Pass()
{
    const double cost = 75.0;

    if (deposit < cost)
    {
        std::cout << "Недостаточно средств на билете. Депозит: "
            << deposit << std::endl;
        return false;
    }

    deposit -= cost;

    std::cout << "Проход по билету. Списано: " << cost
        << ". Остаток: " << deposit << std::endl;
    return true;
}

double Ticket::GetDeposit() const
{
    return deposit;
}