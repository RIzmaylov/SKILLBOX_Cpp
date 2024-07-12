#include <iostream>

/*
Напишите программу, которая выводит на экран равнобедренный треугольник, заполненный символами решётки «#». 
Пусть высота треугольника вводится пользователем. 
Обеспечьте контроль ввода.

Пример выполнения
    #    
   ###   
  #####  
 #######
#########

Рекомендации по выполнению
    Решение можно организовать с помощью двух циклов, один для вывода пробельных символов, второй для вывода символа решётки.
Что оценивается
    Между строкой ввода и верхушкой ёлочки не должно быть пустых строк.
    Высота ёлочки соответствует значению, введённому с клавиатуры.
    Ёлочка рисуется с помощью циклов.
*/

int main() {
    int treeSize = 0;
    std::cout << "Введите высоту ёлочки: ";
    std::cin >> treeSize;
    while (treeSize <= 0) {
        std::cout << "Введите неотрицательную высоту ёлочки: ";
        std::cin >> treeSize;
    }
    int treeWidth = (treeSize - 1) * 2 + 1;

    for (int row = 0, gridCnt = 1; row < treeSize; ++row, gridCnt += 2) {
        for (int col = 0; col < treeWidth; ++col) {
            if (col == treeWidth / 2 - gridCnt / 2) {
                for (int grid = 1; grid <= gridCnt; ++grid) {
                    std::cout << '#';
                    col += gridCnt;
                }
            } else std::cout << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}