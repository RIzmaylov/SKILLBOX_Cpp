#include <iostream>

/*
Модифицируйте пример с координатными осями так, чтобы в точке их пересечения рисовался знак «+», 
на верхнем конце вертикальной оси была стрелка вверх «^», а на правом конце горизонтальной оси — стрелка вправо «>». 
Это сделает рисунок более красивым и точным.

Рекомендации по выполнению
    Заметьте, что в центре координатных осей есть пересечение.

Что оценивается
    Координатные оси рисуются с помощью условных конструкций и циклов.
*/

int main() {
    int width, height;
    std::cout << "Введите ширину и высоту координатной сетки: ";
    std::cin >> width >> height;
    if (width <= 0 || height <= 0) {
        std::cout << "Ширина или высота не могут быть отрицательными или нулевыми";
        return 0;
    }

    for(int row = 0; row < height; ++row) {
        for (int col = 0; col < width; ++col) {
            if (col == width / 2) {
                if (row == 0) std::cout << '^';
                else if (row == height / 2) std::cout << '+';
                else std::cout << '|';
            }
            else if (row == height / 2) {
                if (col == width - 1) std::cout << '>';
                else if (col == width / 2) std::cout << '+';
                else std::cout << '-';
            }
            else std::cout << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}