#pragma once
#include "BasePassKey.h"

class Ticket : public BasePassKey
{
private:
    double deposit;

public:
    Ticket(std::string fio, std::string org, double initialDeposit);

    bool Pass() override;

    double GetDeposit() const;
};
