#pragma once

#include "BaseBankingCard.h"
#include <string>

class CreditCard : public BaseBankingCard
{
public:
    // Конструктор кредитной карты
    CreditCard(std::string owner, std::string pin);

    // Списание процента за обслуживание
    void Service(double percent);
};