#include <iostream>

/*
Помните задачу про барберов из видео 4.3? Кстати, именно оператор % мог помочь нам с барберами. 
Перепишите программу про них с его использованием для проверки на проблему с целочисленным делением.

Напишите программу, которая отвечает на вопрос хватает ли барберов в данном
городе если задано число людей и число барберов, а так же указано, что
один барбер работает 8 часов в день, на одного клиента тратит 1 час
а каждый клиент приходит раз в месяц. Воспользуйтесь для решения проблемы
целочисленного деления оператором %

Что оценивается
    Программа должна всегда корректно работать и не вылетать.
*/
int main() {
    int barberCnt = 0;
    int barberShiftHrs = 8;
    int menInCity = 0;

    std::cout << "Введите количество мужчин в городе: ";
    std::cin >> menInCity; 
    std::cout << "Введите количество барберов в барбершопах: ";
    std::cin >> barberCnt;
    
    int menPerBarberMonth = barberShiftHrs * 30;
    int reqBarbersCnt = menInCity / menPerBarberMonth;
    
    if (reqBarbersCnt == 0 || menInCity % (reqBarbersCnt * menPerBarberMonth) != 0) {
        reqBarbersCnt += 1;
    }
    
    if (reqBarbersCnt <= barberCnt) {
        std::cout << "Барберов хватает!\n";
    } else {
        std::cout << "Барберов не достаточно! Нужно барберов: " << reqBarbersCnt;
    }
    return 0;
}