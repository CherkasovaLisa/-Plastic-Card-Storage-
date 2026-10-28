#pragma once
#include "BasePassKey.h"

class AccessKey : public BasePassKey
{
public:
    AccessKey(std::string fio, std::string org);
    bool Pass() override;
};