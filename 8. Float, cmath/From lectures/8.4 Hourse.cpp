#include  <iostream>
#include <cmath>
/*
Задача 1. Ход конём
В рамках разработки шахматного искусственного интеллекта стоит новая задача. 
По заданным вещественным координатам коня и второй точки программа должна определить, может ли конь ходить в эту точку. 
Используйте как можно меньше конструкций if и логических операторов. 
Обеспечьте контроль ввода. 


Пример
Ввод:

Введите местоположение коня:

0.071;

0.118.

Введите местоположение точки на доске:

0.213;

0.068.



Вывод:

Конь в клетке (0, 1). Точка в клетке (2, 0).

Да, конь может ходить в эту точку.
*/

int main() {
    float hoursePosX, hoursePosY;
    float pointPosX, pointPosY;

    std::cout << "Введите местоположение коня: ";
    std::cin >> hoursePosX >> hoursePosY;
    std::cout << "Введите местоположение точки на доске: ";
    std::cin >> pointPosX >> pointPosY;
    
    int hoursePosXint = (int)(hoursePosX * 10), hoursePosYint = (int)(hoursePosY * 10);
    int pointPosXint = (int)(pointPosX * 10), pointPosYint = (int)(pointPosY * 10);
    
    if (std::abs(hoursePosXint - pointPosXint) == 2 &&  std::abs(hoursePosYint - pointPosYint) == 1 ||
        std::abs(hoursePosYint - pointPosYint) == 2 &&  std::abs(hoursePosXint - pointPosXint) == 1) {
        std::cout << "Да, конь может ходить в эту точку.";
    } else {
        std::cout << "Нет, конь не может ходить в эту точку.";
    }
    return 0;
}