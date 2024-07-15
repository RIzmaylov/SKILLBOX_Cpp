#include <iostream>
#include <cmath>

/*
Вы пишете симулятор космических полётов. 
Ваш звездолёт массой m килограмм включает двигатель с силой тяги F ньютонов на t секунд. 
Напишите программу, которая по заданным F, m и t покажет, на каком расстоянии от первоначального положения 
окажется космический корабль через t секунд. 
Обеспечьте контроль ввода.

Примечание: космический корабль находится в открытом космосе.

Напоминаем, что расстояние можно рассчитать по формуле:

(a * (t) ^ t) / 2, где a = F / m;

Рекомендации по выполнению
    Для операции возведения в степень удобно использовать функцию std::pow.

Что оценивается
    Правильно использована формула.

В расчётах используются переменные типа float.
*/

int main() {
    float m,  F;
    int t;

    std::cout << "Введите массу корабля в кг: ";
    std::cin >> m;
    std::cout << "Введите силу тяги в Ньютонах: ";
    std::cin >> F;
    std::cout << "Введите время в секундах: ";
    std::cin >> t;

    float a = F / m;
    float result = a * std::pow(t, 2) / 2.0f;
    std::cout << "Корабль пройдет расстояние: " << result << "\n";
    return 0;
}