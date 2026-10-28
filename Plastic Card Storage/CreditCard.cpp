#include "CreditCard.h"
#include "CardDataGenerator.h"
#include <iostream>

// Создание кредитной карты
CreditCard::CreditCard(std::string owner, std::string pin)
    : BaseBankingCard(
        CardDataGenerator::GenerateCardNumber(),
        CardDataGenerator::GenerateCvc(),
        owner,
        pin,
        100000
    )
{
}

// Списание процента за обслуживание
void CreditCard::Service(double percent)
{
    double deposit = GetDeposit();

    double serviceCost = deposit * percent / 100.0;

    SetDeposit(deposit - serviceCost);

    std::cout << "Списано за обслуживание: "
        << serviceCost << std::endl;

    std::cout << "Остаток: "
        << GetDeposit() << std::endl;
}