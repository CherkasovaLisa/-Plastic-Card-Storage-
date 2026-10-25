#pragma once
#include <string>

class BasePlasticCard {
protected:
    std::string number;
    std::string cvc;

public:
    // Объявляем конструктор и функции
    BasePlasticCard(std::string num, std::string code);
    std::string GetNumber();
    std::string GetCvc();
};