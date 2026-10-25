#include "BasePlasticCard.h"

// Конструктор: просто присваиваем переданные значения нашим переменным
BasePlasticCard::BasePlasticCard(std::string num, std::string code) {
    number = num;
    cvc = code;
}

// Функция возвращает номер карты
std::string BasePlasticCard::GetNumber() {
    return number;
}

// Функция возвращает CVC код
std::string BasePlasticCard::GetCvc() {
    return cvc;
}