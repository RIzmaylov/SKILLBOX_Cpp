#include <iostream>

/*
В предыдущем задании вы написали программу-календарь для мая. 
Теперь добавьте возможность начать месяц с любого дня недели. 

Для этого нужно ввести число — номер дня недели, с которого начинается месяц. Убедитесь, что введённое число корректно.

Советы и рекомендации
    Для начала выполните задание 2.
    Постарайтесь не проверять каждый вариант месяца отдельно. Некоторые условия можно объединить.
*/

int main() {
    int day = 0, startOfMonth = 0;
    std::cout << "Введите номер дня, с которого начинается месяц (1 - 7): ";
    std::cin >> startOfMonth;

    if (startOfMonth < 1 || startOfMonth > 7) {
        std::cout << "Вы ввели некорректный номер первого дня!";
        return 0;
    }

    std::cout << "Введите число месяца: ";
    std::cin >> day;

    if (day < 1 || day > 31) std::cout << "Вы ввели некорректное число месяца!";
    else if (day >= 1 && day <= 5 || day >= 8 && day <= 10) std::cout << "Праздничный день!";
    else {
        int sundayDate = 7 - startOfMonth + 1;

        if ((day - sundayDate) % 7 == 0 || (day - sundayDate + 1) % 7 == 0) std::cout << "Выходной!";
        else std::cout << "Рабочий день :(";
    }
    return 0;
}