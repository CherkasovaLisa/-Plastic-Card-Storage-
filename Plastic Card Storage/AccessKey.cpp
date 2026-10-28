#include "AccessKey.h"
#include <iostream>
#include <chrono>
#include <ctime>

AccessKey::AccessKey(std::string fio, std::string org)
    : BasePassKey(fio, org)
{
}

bool AccessKey::Pass()
{
    auto now = std::chrono::system_clock::now();
    std::time_t t = std::chrono::system_clock::to_time_t(now);

    std::cout << "Passed at: " << std::ctime(&t); // ctime добавляет '\n'
    return true;
}