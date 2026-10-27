#pragma once

#include "BaseBankingCard.h"
#include <string>

class DebitCard : public BaseBankingCard
{
public:
    // Конструктор дебетовой карты
    DebitCard(std::string owner, std::string pin);

    // Изменение депозита
    void SetDeposit(double dep);
};
