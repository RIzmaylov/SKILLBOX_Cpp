#include <iostream>

/*
Числами Фибоначчи называется следующая последовательность чисел: 1, 1, 2, 3, 5, 8, 13 
и так далее (первое число равно 1, второе число равно 1, а каждое следующее равно сумме двух предыдущих). 
Напишите программу, которая по данному номеру N выводит N-е число этой последовательности 
(если оно не превосходит 2 147 483 647, конечно же). Обеспечьте контроль ввода.

Пример выполнения

            Введите номер последовательности: 1 
            Число в последовательности: 1 
            Введите номер последовательности: 6 
            Число в последовательности: 8

Рекомендации по выполнению
    Заметьте, что последовательность Фибоначчи всегда одинаковая. 
        Пользователь вводит только порядковый номер числа из последовательности.
    Обратите внимание, что условие типа if(value > 2147483647) не имеет смысла.
    Что оценивается
Результатом запроса является число из последовательности Фибоначчи.
    Число 1 определяется как первое и второе число последовательности.
*/

int main() {
    int fibNum = 0, fib1 = 1, fib2 = 1, resNum = 1;
    std::cout << "Введите номер последовательности чисел Фибоначчи: ";
    std::cin >> fibNum;

    if (fibNum <= 0) std::cout << "В программе рассматривается только положительная последовательность Фибоначчи";
    else if (fibNum < 3) {
        std::cout << "Число в последовательности: " << resNum;
    } else {
        fibNum -= 2;
        while(fibNum--) {
            resNum = fib1 + fib2;
            fib1 = fib2;
            fib2 = resNum;
        }
        std::cout << "Число в последовательности: " << resNum;
    }

    return 0;
}