#include <iostream>

/*
Напишите программу, которая имитировала бы часы с кукушкой. В начале работы она спрашивает, 
который час, а затем нужное количество раз пишет «Ку-ку!». 
При выполнении задания необходимо обеспечить контроль ввода (например, количество часов не может быть отрицательным).

Пример выполнения

            Введите, который час: 2 
            Ку-ку! 
            Ку-ку!

Рекомендации по выполнению
Обратите внимание, если вы захотите использовать 24-часовой формат, 
в котором часы имеют значения 0–23, то кукушка не сможет вас оповестить о полночи (нулевой час).

Что оценивается
    Есть проверка входных значений.
    Количество выведенных на консоль фраз равно количеству часов.
*/

int main() {
    int hrsCnt = 0;
    std::cout << "Введите количество часов в 24 часовом формате: ";
    std::cin >> hrsCnt;

    while (hrsCnt < 0 || hrsCnt > 23) {
        std::cout << "Введите корректное количество часов! Кукушка знает только целые числа от 0 до 23: ";
        std::cin >> hrsCnt;
    }
    while (hrsCnt--) {
        std::cout << "Ку-ку!\n";
    }

    return 0;
}