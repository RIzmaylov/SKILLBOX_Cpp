#include <iostream>

/*
Напишите программу, которая проверяет, делится ли одно число на другое без остатка.

Пример 1

Введите первое число: 45 
Введите второе число: 5 
-----Проверяем----- 
Да, 45 делится на 5 без остатка!

Пример2

Введите первое число: 21 
Введите второе число: 8 
-----Проверяем----- 
Нет, 21 не делится на 8 без остатка!

Советы и рекомендации
    Не забудьте про отрицательные числа.
    Учитывайте правила деления чисел.
Что оценивается
    Корректная работа программы.
*/
int main() {
    int firstNum = 0, secondNum = 0, lessNum = 0, greaterNum = 0;

    std::cout << "Введите первое число: ";
    std::cin >> firstNum;
    std::cout << "Введите второе число: ";
    std::cin >> secondNum;
    std::cout << "-----Проверяем----- \n";

    if (firstNum < secondNum) {
        lessNum = firstNum;
        greaterNum = secondNum;
    } else {
        lessNum = secondNum;
        greaterNum = firstNum;
    }

    if (greaterNum % lessNum == 0) {
        std::cout << "Да, " << greaterNum << " делится на " << lessNum << " без остатка!" ;
    } else {
        std::cout << "Нет, " << greaterNum << " не делится на " << lessNum << " без остатка!" ;
    }

    return 0;
}