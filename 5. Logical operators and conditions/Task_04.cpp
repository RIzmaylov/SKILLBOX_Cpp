#include <iostream>

/*
Напишите программу для банкомата.

Условие:

Однажды Вася подошёл к банкомату и захотел обналичить N рублей. 
В банкомате есть купюры достоинством 100, 200, 500, 1 000, 2 000 и 5 000 рублей. 
Банкомат хочет выдать Васе запрошенную сумму, обойдясь как можно меньшим числом купюр.

Напишите программу для банкомата, которая по заданному числу N: 
    решает, сколько купюр каждого номинала нужно выдать (4 по 200, 1 по 1 000) для получения суммы ровно N рублей; 
    либо говорит, что выдать ровно N рублей невозможно, например если N не делится на 100.
Учтите, что банкомат не может выдать за один раз более 150 000 рублей. 

При попытке запросить такую сумму должно быть выдано сообщение об ошибке. 
Например, 800 рублей нужно выдать как 1 по 500, 1 по 200 и ещё 1 по 100.

Советы и рекомендации
    Используйте как деление, так и получение остатка от деления.
    Постарайтесь выдать самый оптимальный набор купюр.
    Помните, что банкомат не может выдать за один раз более 150 000 рублей
*/

int main() {
    int money = 0;
    std::cout << "Введите сумму получки: ";
    std::cin >> money;

    if (money <= 0 || money % 100 != 0 || money > 150'000) {
        std::cout << "Такую сумму получить невозможно!";
    } else {
        int cnt5000 = 0, cnt2000 = 0, cnt1000 = 0, cnt500 = 0, cnt200 = 0, cnt100 = 0, remain = money;
        cnt5000 = remain / 5000;
        remain %= 5000;
        cnt2000 = remain / 2000;
        remain %= 2000;
        cnt1000 = remain / 1000;
        remain %= 1000;
        cnt500 = remain / 500;
        remain %= 500;
        cnt200 = remain / 200;
        remain %= 200;
        cnt100 = remain / 100;

        std::cout << "Сумма будет получена купюрами:\n";
        if (cnt5000 != 0) std::cout << cnt5000 << " по 5000р\n";
        if (cnt2000 != 0) std::cout << cnt2000 << " по 2000р\n";
        if (cnt1000 != 0) std::cout << cnt1000 << " по 1000р\n";
        if (cnt500 != 0) std::cout << cnt500 << " по 500р\n";
        if (cnt200 != 0) std::cout <<  cnt200 << " по 200р\n";
        if (cnt100 != 0) std::cout << cnt100 << " по 100р\n";
    }
    return 0;
}