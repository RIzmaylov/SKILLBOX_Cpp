#include <iostream>

/*
Напишите программу, которая определяет уровень персонажа в компьютерной игре. 
Пользователь вводит число «очков опыта», а программа вычисляет уровень. 
Новый уровень даётся при достижении 1000, 2500 и 5000 «очков опыта». 
Начальный уровень равен 1.

Пример

Введите число очков опыта: 2000 
-----Считаем----- 
Ваш уровень: 2

Советы и рекомендации
    Программа должна выводить текущий уровень персонажа для любого количества очков.
    Обработка некорректного ввода приветствуется.
    Чтобы сократить количество проверок, используйте оператор else if.
Что оценивается
    Правильное определение текущего уровня персонажа.
    Отсутствие лишних и дублирующих проверок.
*/
int main() {
    int exp = 0;
    int curLevel = 1;
    std::string upLevelMsg = "Вы получили много опыта! Ваш уровень вырос и составляет: ";

    std::cout << "Введите количество полученного опыта ";
    std::cin >> exp;
    if (exp < 0) {
        std::cout << "Не может быть, вы совершенствуетесь, но наоборот! (Введите положительное число)\n";
    } else if (exp >= 5000) {
        curLevel += 3;
        std::cout << upLevelMsg << curLevel;
    } else if (exp >= 2500) {
        curLevel += 2;
        std::cout << upLevelMsg << curLevel;
    } else if (exp >= 1000) {
        curLevel += 1;
        std::cout << upLevelMsg << curLevel;
    } else {
        std::cout << "К сожалению, вы не набрали достаточно опыта, ваш уровень тот же: " << curLevel;
    }
    return 0;
}