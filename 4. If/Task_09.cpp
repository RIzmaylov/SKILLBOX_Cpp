#include <iostream>

/*
В последнем видео мы писали программу, вычисляющую сумму налога по прогрессивной шкале в зависимости 
от полученного заработка: 13% — на доход до 10 000, 20% — на доход от 10 000 до 50 000, 30% — на доход выше 50 000.

Однако во многих странах, использующих такую шкалу, эта сумма вычисляется более сложным способом: 
налоговая ставка 30% на доход выше 50 000 означает, что 30% уплачивается не со всей суммы, 
а лишь с той её части, которая превосходит 50 000. 
Аналогично: ставка 20% на доход от 10 000 до 50 000 обязывает уплатить 20% лишь с той части суммы, 
которая превосходит 10 000, но не превосходит 50 000.

Так, например, с дохода 100 000 придётся заплатить такой налог: 
30% * (100 000 – 50 000) + 20% * (50 000 – 10 000) + 13% * 10 000 = 15 000 + 8000 + 1300 = 24 300.

С дохода 30 000: 20% * (30 000 – 10 000) + 13% * 10 000 = 4000 + 1300 = 5300.

Напишите программу, которая спрашивает у пользователя его доход
 и рассчитывает сумму налога для него по вышеописанным правилам.

Советы и рекомендации
    Обработка некорректного ввода приветствуется.
    Чтобы сократить количество проверок, используйте оператор else if.
Что оценивается
    Правильное определение налога.
    Отсутствие лишних и дублирующих проверок.
*/
int main() {
    int income = 0;
    int fTax = 13, sTax = 20, tTax = 30;
    int fTaxLim = 10'000, sTaxLim = 50'000;

    std::cout << "Введите сумму дохода: ";
    std::cin >> income;

    if (income < 1) {
        std::cout << "Вы ничего не заработали, а может даже потратили, вы не платите налог";
    }
    else if (income < fTaxLim) {
        std::cout << "Ваш налог: " << income * fTax / 100;
    } else if (income < sTaxLim) {
        std::cout << "Ваш налог: " << (income - fTaxLim) * sTax / 100 + fTaxLim * fTax / 100;
    } else {
        std::cout << "Ваш налог: " << (income - sTaxLim) * tTax / 100 + (income - sTaxLim - fTaxLim) * sTax / 100 + fTaxLim * fTax / 100;
    }
    return 0;
}