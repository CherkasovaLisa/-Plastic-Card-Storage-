#include "CardDataGenerator.h"
#include <cstdlib>
#include <ctime>

void InitRandom() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

std::string CardDataGenerator::GenerateCardNumber() {
    std::string number = "";
    for (int i = 0; i < 16; ++i) {
        int iRand = rand() % 10;
        number += std::to_string(iRand);
    }
    return number;
}

std::string CardDataGenerator::GenerateCvc() {
    std::string cvc = "";
    for (int i = 0; i < 3; ++i) {
        int iRand = rand() % 10;
        cvc += std::to_string(iRand);
    }
    return cvc;
}