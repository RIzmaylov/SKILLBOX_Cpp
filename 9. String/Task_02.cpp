#include <iostream>
#include <regex>
#include <vector>

/*
Вы решили разработать программу-калькулятор, которая складывает числа сколько угодно большой длины. 
Для этого вы планируете работать с ними как со строками. 
Первая проблема, с которой вы столкнулись, — по данной строке нужно понять, 
является она корректной записью вещественного числа или нет.

Корректной считается запись, удовлетворяющая следующим условиям:
    Первым символом должна быть либо цифра, либо точка, либо знак минус. 
    После этого может идти ещё несколько цифр (возможно, ни одной). 
    Затем может идти точка, отделяющая целую часть от дробной. До точки может и не быть цифр. 
        В таком случае считается, что до точки стоит 0. 
    После точки идёт ещё несколько цифр (возможно, ни одной). Хотя бы одна цифра в записи числа должна присутствовать. (Чтобы не усложнять задачу, в этом задании мы не будем рассматривать числа в экспоненциальной записи, такие как 1.2e-3.)

Напишите программу, которая получает от пользователя строку и выводит ответ Yes, 
если эта строка корректно задаёт вещественное число, в противном случае выводит No.

Пример выполнения
Корректные записи:

0123

00.000

.15

165.

999999999999999999999999999999999.999999999999999999999

−1.0

−.35

Некорректные записи:

1.2.3 (десятичная точка может быть только одна)

−. (должна быть хотя бы одна цифра в записи)

11e-3 (мы не разрешаем использовать символ e в записи)

+25 (мы не разрешаем использовать символ + в записи)

Что оценивается
    Использован строковый тип данных для считывания чисел.
    Решение на примерах из условия выдаёт правильный результат.
*/

bool CheckNum(const std::string& numInString) {
    bool haveDot = false, haveSign = false, haveDigit = false;
    for (int i = 0; i < numInString.length(); ++i) {
        if (!haveDot && numInString[i] == '.') 
            haveDot = true;
        else if (!haveSign && i == 0 && numInString[i] == '-') 
            haveSign = true;
        else if (numInString[i] >= '0' && numInString[i] <= '9') 
            haveDigit = true;
        else return false;
    }
    if (haveDigit) return true;
    else return false;
}

bool CheckRegexNum(const std::string& numInString) {
    static const std::regex r(R"(\-?(\d+)?(\.\d{0,})?)");
    return std::regex_match(numInString, r);
}

void Test(const std::string& req) {
    std::cout << "Число " << req;
    if (CheckRegexNum(req)) std::cout << " корректно!\n";
    else std::cout << " некорректно!\n";
}

int main() {
    // std::string numInString;
    // std::cout << "Введите число:\n";
    // std::cin >> numInString;

    // if (CheckNum(numInString)) std::cout << "Число корректно!";
    // else std::cout << "Число некорректно!";

    std::vector<std::string> trueStrings {"0123", "00.000", ".15", "165.", 
        "999999999999999999999999999999999.999999999999999999999", "-1.0", "-.35"};
    std::vector<std::string> falseStrings {"1.2.3", "11e-3", "+25"};

    std::cout << "Корректные числа:\n";
    for(const auto& s : trueStrings) {
        Test(s);
    }
    std::cout << "Некорректные числа:\n";
    for(const auto& s : falseStrings) {
        Test(s);
    }
    return 0;
}