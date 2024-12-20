#include <iostream>
#include "Header.h"

int main() {
    // Создание векторов
    Vector v1(3.0f, 4.0f, 0.0f);
    Vector v2(1.0f, 2.0f, 0.0f);
    Vector happyVector(7.0f, 7.0f, 7.0f); // Создание "счастливого" вектора

    // Вычисление длины первого вектора
    std::cout << "Length of v1: " << v1.length() << std::endl;

    // Нормализация первого вектора
    Vector v1_normalized = v1.normalize();
    std::cout << "Normalized v1: (" << v1_normalized.x << ", "
        << v1_normalized.y << ", " << v1_normalized.z << ")" << std::endl;

    // Скалярное произведение
    float dot_product = Vector::dot(v1, v2); // Исправленный вызов
    std::cout << "Dot product of v1 and v2: " << dot_product << std::endl;

    // Проверка на "счастливый" вектор
    if (happyVector.isHappy()) {
        std::cout << "happyVector is a happy vector!" << std::endl;
    }
    else {
        std::cout << "happyVector is not a happy vector!" << std::endl;
    }

    return 0;
}