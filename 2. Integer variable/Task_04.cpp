#include <iostream>

/*
Управляющая компания рассылает странные квитанции: в них указана только полная стоимость ремонта многоквартирного дома, 
а сколько должна платить конкретная квартира — непонятно. Напишите программу, 
с помощью которой жители квартир смогут посчитать, какую сумму им надо заплатить. 
Сумма делится на все квартиры вне зависимости от площади, количества жильцов и комнат. 
Все значения сохраните в переменные и выводите в нужных местах, имитируя ввод данных.

Пример работы программы: 

Приветствуем вас в калькуляторе квартплаты!  
  
Введите сумму, указанную в квитанции: 4000000 
Сколько подъездов в вашем доме? 10 
Сколько квартир в каждом подъезде? 40 
----Считаем----- 
Каждая квартира должна платить по 10 000 руб.
*/
int main() {
    int fullReceiptAmount = 4000000;
    int entrancesCnt = 10;
    int flatsPerEntrance = 40;

    int receiptPerFlat = fullReceiptAmount / (entrancesCnt * flatsPerEntrance);

    std::cout << "Приветствуем вас в калькуляторе квартплаты!\n\n";
    std::cout << "Введите сумму, указанную в квитанции: " << fullReceiptAmount << '\n';
    std::cout << "Сколько подъездов в вашем доме? " << entrancesCnt << '\n';
    std::cout << "Сколько квартир в каждом подъезде? " << flatsPerEntrance << '\n';
    std::cout << "----Считаем-----\n";
    std::cout << "Каждая квартира должна платить по " << receiptPerFlat << " руб.\n";
    return 0;
}