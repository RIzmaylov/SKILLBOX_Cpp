#include <iostream>

/*
Напишите программу, которая угадывает число, задуманное пользователем. 
Число загадывается в диапазоне от 0 до 63. Программа задаёт вопросы вида «Ваше число больше такого-то?» 
и на основе ответов пользователя («да» или «нет») угадывает число.

Рекомендации по выполнению
    В этом задании можно использовать любой алгоритм поиска, 
        но полный перебор всех 64 значений — самый нежелательный из алгоритмов.
    Есть алгоритм, который гарантированно даст ответ за семь вопросов.
Что оценивается
    Нет полного перебора всех чисел.
    Программа работает только в указанном отрезке и не выходит за его пределы. 
        При этом есть возможность поменять отрезок поиска без сильных изменений в коде программы.
    Допустимые ответы на вопросы — только «да» или «нет».
*/

int main() {
    int bottomBrd = 0, upperBrd = 0, number = 0;
    std::cout << "Введите нижнюю границу: ";
    std::cin >> bottomBrd;
    std::cout << "Введите верхнюю границу: ";
    std::cin >> upperBrd;
    std::cout << "Введите загадываемое число: ";
    std::cin >> number;

    if (bottomBrd > upperBrd) {
        std::cout << "Некорректный диапазон";
        return 0;
    }
    if (number < bottomBrd || number > upperBrd) {
        std::cout << "Число не в диапазоне!";
        return 0;
    }
    int resNum = (upperBrd + bottomBrd) / 2;
    while (bottomBrd != upperBrd) {
        std::string answer;
        resNum = (upperBrd + bottomBrd) / 2;
        
        std::cout << "Ваше число больше " << resNum << "? (yes/no): ";
        std::cin >> answer;

        while (!(answer == "yes" || answer == "no" || answer == "Yes" || answer == "No" || answer == "YES" || answer == "NO")) {
            std::cout << "Введите корректный ответ (да/нет): ";
            std::cin >> answer;
        }

        if (answer == "yes" || answer == "Yes" || answer == "YES") {
            bottomBrd = resNum + 1;
        } else {
            upperBrd = resNum;
        }
    }

    std::cout << "Ваше число: " << bottomBrd;

    return 0;
}