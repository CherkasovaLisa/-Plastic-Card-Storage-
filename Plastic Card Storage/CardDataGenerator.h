#pragma once
#include <string>

class CardDataGenerator {
public:
    // Генерирует 16-значный номер карты
    static std::string GenerateCardNumber();

    // Генерирует 3-значный CVC-код
    static std::string GenerateCvc();
};

void InitRandom(); // Чтобы main знал об этой функции