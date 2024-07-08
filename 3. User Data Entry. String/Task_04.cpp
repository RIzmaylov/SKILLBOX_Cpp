#include <iostream>

/*
Вернитесь к задаче про обмен местами значений переменных и 
попробуйте решить её без использования третьей переменной (упс, спойлер, но ничего страшного!). 
Догадайтесь, в каких случаях новый способ может не работать и какие у него преимущества.

Советы и рекомендации
    Используйте только две исходные переменные.
    Используйте арифметические операции для обмена.
Что оценивается
    По окончании работы алгоритма обмена в переменной a должно лежать значение, 
    которое изначально лежало в переменной b, и наоборот.
    В программе используются только две переменные.
*/
int main() {
    int a = 0, b = 0;
    std::cout << "Меняем переменные!\n";
    std::cout << "Введите число a - ";
    std::cin >> a;
    std::cout << "Введите число b - ";
    std::cin >> b;

    a += b;
    b -= a;
    a += b;
    b *= -1;

    std::cout << "\nМеняем местами!\n";
    std::cout << "Значение в a - " << a << '\n';
    std::cout << "Значение в b - " << b << '\n';
    return 0;
}