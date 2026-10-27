#include "DebitCard.h"
#include "CardDataGenerator.h"
#include <iostream>

// Создание дебетовой карты
DebitCard::DebitCard(std::string owner, std::string pin)
    : BaseBankingCard(
        CardDataGenerator::GenerateCardNumber(),
        CardDataGenerator::GenerateCvc(),
        owner,
        pin,
        10000
    )
{
}

// Изменение депозита
void DebitCard::SetDeposit(double dep)
{
    if (dep < 0)
    {
        std::cout << "Ошибка: депозит не может быть меньше нуля." << std::endl;
        return;
    }

    BaseBankingCard::SetDeposit(dep);
}