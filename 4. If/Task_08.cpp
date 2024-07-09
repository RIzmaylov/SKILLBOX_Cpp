#include <iostream>

/*
В отделе маркетинга работают три сотрудника. Их зарплаты могут быть как разными, так и одинаковыми. 
Напишите программу, которая вычисляет разницу между самой высокой и самой низкой зарплатами сотрудников, 
а также среднее арифметическое зарплат всех сотрудников отдела.

Пример

Введите зарплату первого сотрудника: 45 рублей
Введите зарплату второго сотрудника: 45 рублей
Введите зарплату третьего сотрудника: 45 рублей
-----Считаем-----
Самая высокая зарплата в отделе: 45 рублей
Разница между самой высокой и самой низкой зарплатой в отделе: 0 рублей
Средняя зарплата в отделе: 45 рублей

Что оценивается
    Правильность нахождения разницы зарплат.
    Оптимальность нахождения разницы зарплат.
*/

int main() {
    int firstEmployeeSalary = 0, secondEmployeeSalary = 0, thirdEmployeeSalary = 0;
    int minSalary = 0, maxSalary = 0;

    std::cout << "Введите зарплату первого сотрудника: ";
    std::cin >> firstEmployeeSalary;
    std::cout << "Введите зарплату второго сотрудника: ";
    std::cin >> secondEmployeeSalary;
    std::cout << "Введите зарплату третьего сотрудника: ";
    std::cin >> thirdEmployeeSalary;
    std::cout << "-----Считаем-----\n";

    minSalary = firstEmployeeSalary;
    maxSalary = firstEmployeeSalary;
    int averageSalary = (firstEmployeeSalary + secondEmployeeSalary + thirdEmployeeSalary) / 3;

    if (secondEmployeeSalary > maxSalary) maxSalary = secondEmployeeSalary;
    if (thirdEmployeeSalary > maxSalary) maxSalary = thirdEmployeeSalary;
    if (secondEmployeeSalary < minSalary) minSalary = secondEmployeeSalary;
    if (thirdEmployeeSalary < minSalary) minSalary = thirdEmployeeSalary;

    std::cout << "Самая высокая зарплата в отделе: " << maxSalary << " рублей\n";
    std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << maxSalary - minSalary << " рублей\n";
    std::cout << "Средняя зарплата в отделе: " << averageSalary << " рублей\n";

    return 0;
}