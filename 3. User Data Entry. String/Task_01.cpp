#include <iostream>

/*
Напишите программу, которая симулирует работу маршрутки. 
Она умеет объявлять остановки и узнавать у пользователя, сколько человек вышло и зашло на остановке. 
Пассажиры оплачивают проезд при входе. Работать она должна примерно так:

Прибываем на остановку «Улица программистов». В салоне пассажиров: 0

Сколько пассажиров вышло на остановке? 0

Сколько пассажиров зашло на остановке? 3

Отправляемся с остановки «Улица программистов». В салоне пассажиров: 3

-----------Едем---------

Прибываем на остановку «Проспект алгоритмов». В салоне пассажиров: 3

…

…


Маршрут состоит из четырёх остановок. Напишите программу так, чтобы в конце она выводила, сколько денег мы заработали при условии, что билет стоит 20 руб., а расходы следующие:

четверть — на зарплату водителю;
пятая часть — на топливо;
пятая часть — на налоги;
пятая часть — на ремонт машины.
Формат вывода (после прибытия на последнюю остановку):

Всего заработали: 100 руб.

Зарплата водителя: 25 руб.

Расходы на топливо: 20 руб.

Налоги: 20 руб.

Расходы на ремонт машины: 20 руб.

Итого доход: 15 руб.

Рекомендации по выполнению
    В одной программе должен быть как ввод количества вошедших и вышедших пассажиров, так и расчёты доходов и расходов.
    Стоит вынести названия остановок в переменные.
    Постарайтесь написать программу так, чтобы в неё без особых изменений можно было добавить ещё несколько остановок.
Что оценивается
    Правильность подсчёта текущего количества пассажиров.
    Правильность подсчёта доходов и расходов.
    Отсутствие лишних переменных.
*/
int main() {
    std::cout << "Симулятор маршрутки\n";

    std::string firstBusStop = "Улица Полиморфизма";
    std::string secondBusStop = "Проспект Инкапсуляции";
    std::string thirdBusStop = "Шоссе Наследования";
    std::string fourthBusStop = "Проулок Абстракции";

    int currentPassCnt = 0;
    int arrivePassCnt = 0;
    int leavePassCnt = 0;
    int ticketPrice = 20;
    int totalProfit = 0;

    std::cout << "Прибываем на остановку \"" << firstBusStop << "\". В салоне пассажиров: " <<  currentPassCnt << '\n';
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> leavePassCnt;
    std::cout << '\n';
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> arrivePassCnt;
    std::cout << '\n';
    currentPassCnt += (arrivePassCnt - leavePassCnt);
    totalProfit += arrivePassCnt * ticketPrice;

    std::cout << "Отправляемся на остановку \"" << secondBusStop << "\". В салоне пассажиров: " <<  currentPassCnt << '\n';
    std::cout << "\n-------------Едем--------------\n";
    
    std::cout << "Прибываем на остановку \"" << secondBusStop << "\". В салоне пассажиров: " <<  currentPassCnt << '\n';
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> leavePassCnt;
    std::cout << '\n';
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> arrivePassCnt;
    std::cout << '\n';
    currentPassCnt += (arrivePassCnt - leavePassCnt);
    totalProfit += arrivePassCnt * ticketPrice;
    
    std::cout << "Отправляемся на остановку \"" << thirdBusStop << "\". В салоне пассажиров: " <<  currentPassCnt << '\n';
    std::cout << "\n-------------Едем--------------\n";
    
    std::cout << "Прибываем на остановку \"" << thirdBusStop << "\". В салоне пассажиров: " <<  currentPassCnt << '\n';
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> leavePassCnt;
    std::cout << '\n';
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> arrivePassCnt;
    std::cout << '\n';
    currentPassCnt += (arrivePassCnt - leavePassCnt);
    totalProfit += arrivePassCnt * ticketPrice;
    
    std::cout << "Отправляемся на остановку \"" << fourthBusStop << "\". В салоне пассажиров: " <<  currentPassCnt << '\n';
    std::cout << "\n-------------Едем--------------\n";
    
    std::cout << "Прибываем на остановку \"" << fourthBusStop << "\". В салоне пассажиров: " <<  currentPassCnt << '\n';
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> leavePassCnt;
    std::cout << '\n';
    currentPassCnt -= leavePassCnt;
    
    std::cout << "Это последняя остановка\n";
    
    int driverSalary = totalProfit / 4;
    int fuelCosts = totalProfit / 5;
    int tax = totalProfit / 5;
    int carRepair = totalProfit / 5;
    int netProfit = totalProfit - driverSalary - fuelCosts - tax - carRepair;

    std::cout << "\nИтого:\n";
    std::cout << "Всего заработали: " << totalProfit << " руб.\n";
    std::cout << "Зарплата водителя: " << driverSalary << " руб.\n";
    std::cout << "Расходы на топливо: " << fuelCosts << " руб.\n";
    std::cout << "Налоги: " << tax << " руб.\n";
    std::cout << "Расходы на ремонт машины: " << carRepair << " руб.\n";
    std::cout << "Итого доход: " << netProfit << " руб.\n";
    return 0;
}