#include <iostream>

/*
Задача 1. Калькулятор скидки.

Вы покупаете 3 товара в магазине. Если сумма вашего чека превышает 10 000 руб, вам будет сделана скидка 10%. 
Напишите программу которая запрашивает 3 стоимости товара и вычисляет сумму чека.

Задача 2. Автомобиль.

Автомобиль выехал из Москвы в Рязань. Напишите программу, 
которая вычисляет сумеет ли добраться автомобиль до Рязани за два часа с заданной пользователем средней скоростью движения. 
Программа должна выводить вычисленное расстояние, а если автомобиль сумеет добраться до Рязани, - сообщение “Вы приехали”. 
Расстояние между городами - 200 км.

Задача 3. Модуль числа.

Напишите программу, которая вычисляет модуль числа.

Подсказка: чтобы обратить знак числа в переменной ‘x’ надо писать вот так: x = - x.

Задача 4. Барберы (необязательная).

В небольшом городке проживает 18 000 взрослых человек: 9 000 мужчин и 9 000 женщин. 
Согласно традиции этого городка все мужчины обязаны носить бороду. 
Один предприимчивый житель открыл сеть барбершопов, чтобы помочь мужчинам ухаживать за их бородами. 
Однако он никак не может посчитать сколько всего специалистов-барберов для этого нужно. 
Вам нужно написать программу которая будет рассчитывать сколько мужчин можно постричь во всех барбершопах 
исходя из следующих данных:

* каждый из 9000 мужчин посещает барбершоп раз в месяц (30 дней)

* один барбер способен обслужить одного клиента за 1 час

* смена барбера — 8 часов

Программа должна спросить сколько мужчин проживает в городе и сколько всего барберов уже работает во всех барбершопах, 
и посчитать сколько барберов нужно, и если их недостаточно — выдать сообщение об этом. 
Если барберов достаточно — сказать и об этом.

Подсказка: в конструкции условия можно сравнивать не только переменную с числом, но и две переменные! 
А еще - целые математические выражения. Например: if (a * b > c) …
*/
int main() {
    //-----------------Task 1-------------------
    int tempPrice = 0;
    int totalPrice = 0;

    std::cout << "Введите стоимость первого товара: ";
    std::cin >> tempPrice;
    totalPrice += tempPrice;
    std::cout << "Введите стоимость второго товара: ";
    std::cin >> tempPrice;
    totalPrice += tempPrice;
    std::cout << "Введите стоимость третьего товара: ";
    std::cin >> tempPrice;
    totalPrice += tempPrice;

    if (totalPrice > 10000) {
        std::cout << "Вы превысили 10000, вам положена скидка 10%!\n";
        totalPrice *= 0.9;
    }
    std::cout << "Итого сумма ваших попупок: " << totalPrice << " руб.\n";
    
    //-----------------Task 2-------------------
    int hours = 2;
    int speedKmH = 0;
    int distanceKm = 200;
    std::cout << "Введите среднюю скорость автомобиля: ";
    std::cin >> speedKmH;
    if (speedKmH * hours >= 200) {
        std::cout << "Вы приехали!\n";
    }
    
    //-----------------Task 3-------------------
    int number = 0;
    std::cout << "Введите число: ";
    std::cin >> number;

    if (number < 0) {
        number = -number;
    }
    std::cout << "Модуль вашего числа: " << number << '\n';

    //-----------------Task 4-------------------
    int barberCnt = 0;
    int barberShiftHrs = 8;
    int menInCity = 0;

    std::cout << "Введите количество мужчин в городе: ";
    std::cin >> menInCity; 
    std::cout << "Введите количество барберов в барбершопах: ";
    std::cin >> barberCnt;

    int menPerBarberMonth = barberShiftHrs * 30;
    int reqBarbersCnt = menInCity / menPerBarberMonth;
    if (reqBarbersCnt * menPerBarberMonth < menInCity) {
        reqBarbersCnt += 1;
    }
    if (reqBarbersCnt <= barberCnt) {
        std::cout << "Барберов хватает!\n";
    } else {
        std::cout << "Барберов не достаточно! Нужно барберов: " << reqBarbersCnt;
    }
    
    return 0;
}