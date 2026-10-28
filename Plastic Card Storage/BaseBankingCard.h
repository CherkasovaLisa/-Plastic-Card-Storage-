#pragma once
#include <string>

class BaseBankingCard
{
private:
    std::string number;
    std::string cvc;
    std::string ownerName;
    std::string pinCode;
    double deposit;

public:
    // Конструктор
    BaseBankingCard(
        std::string num,
        std::string code,
        std::string owner,
        std::string pin,
        double dep
    );

    // Получение номера карты
    std::string GetNumber();

    // Получение CVC-кода
    std::string GetCvc();

    // Получение имени владельца
    std::string GetOwnerName();

    // Получение PIN-кода
    std::string GetPinCode();

    // Получение депозита
    double GetDeposit();

    // Изменение депозита
    void SetDeposit(double dep);
};