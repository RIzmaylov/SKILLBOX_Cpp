#include <iostream>

/*
Вклад в банке составляет X рублей. Ежегодно он увеличивается на P процентов, после чего дробная часть копеек отбрасывается. 
Определите, через сколько лет вклад составит не менее Y рублей. 
Напишите программу, которая по данным числам X, Y, P определяет, сколько лет пройдёт, 
прежде чем сумма достигнет значения Y.

Пример выполнения

            Введите размер вклада: 100 
            Введите процентную ставку: 10 
            Введите желаемую сумму: 200 
            Придётся подождать: 8 лет

Пример вычисления:

1 год: 100 + 10% * 100 = 110

2 год: 110 + 10% * 110 = 121

3 год: 121 + 10% * 121 = 133 

Рекомендации по выполнению
    Расчёты проводятся в целых числах.
    У вклада есть капитализация процентов (проценты начисляются на весь остаток на счёте).
Что оценивается
    Программа аварийно не завершается и не зависает при подсчёте вклада.
*/

int main() {
    int contribution = 0, desiredAmount = 0, percent = 0, years = 0;
    std::cout << "Введите размер вклада: ";
    std::cin >> contribution;
    std::cout << "Введите процентную ставку: ";
    std::cin >> percent;
    std::cout << "Введите желаемую сумму: ";
    std::cin >> desiredAmount;

    while (contribution < desiredAmount) {
        contribution += (contribution * percent / 100);
        ++years;
    }
    std::cout << "Придется подождать: " << years;
    if (years % 10 == 0 || years % 10 >= 5 || (years / 10) % 10 == 1) {
        std::cout << " лет";
    } else if (years  % 10 == 1) {
        std::cout << " год";
    } else {
        std::cout << " года";
    }

    return 0;
}