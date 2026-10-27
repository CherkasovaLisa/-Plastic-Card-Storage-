#include "BaseBankingCard.h"

// Конструктор: присваиваем переданные значения переменным
BaseBankingCard::BaseBankingCard(
    std::string num,
    std::string code,
    std::string owner,
    std::string pin,
    double dep
)
{
    number = num;
    cvc = code;
    ownerName = owner;
    pinCode = pin;
    deposit = dep;
}

// Возвращает номер карты
std::string BaseBankingCard::GetNumber()
{
    return number;
}

// Возвращает CVC-код
std::string BaseBankingCard::GetCvc()
{
    return cvc;
}

// Возвращает имя владельца
std::string BaseBankingCard::GetOwnerName()
{
    return ownerName;
}

// Возвращает PIN-код
std::string BaseBankingCard::GetPinCode()
{
    return pinCode;
}

// Возвращает депозит
double BaseBankingCard::GetDeposit()
{
    return deposit;
}

// Изменяет депозит
void BaseBankingCard::SetDeposit(double dep)
{
    deposit = dep;
}