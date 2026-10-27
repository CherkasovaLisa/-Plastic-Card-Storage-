#include <iostream>
#include "CardDataGenerator.h" // Подключаем наш генератор

// Объявление функции инициализации (если она не в классе)
void InitRandom();

int main() {
    // 1. Инициализируем генератор случайных чисел ОДИН раз
    InitRandom();

    // 2. Проверяем работу (тест)
    std::string newCardNumber = CardDataGenerator::GenerateCardNumber();
    std::string newCvc = CardDataGenerator::GenerateCvc();

    std::cout << "Сгенерирован номер карты: " << newCardNumber << std::endl;
    std::cout << "Сгенерирован CVC: " << newCvc << std::endl;

    return 0;
}

