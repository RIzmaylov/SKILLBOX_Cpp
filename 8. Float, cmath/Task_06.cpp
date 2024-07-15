#include <iostream>

/*
Известно, что амплитуда качающегося маятника с каждым разом затухает на 8,4% от амплитуды прошлого колебания. 
Если качнуть маятник, он, строго говоря, никогда не остановится: 
го амплитуда будет уменьшаться до тех пор, пока мы не сочтём такой маятник остановившимся. 
Напишите программу, определяющую, сколько раз качнётся маятник, прежде чем он, по нашему мнению, остановится. 
Программа получает на вход начальную амплитуду колебания в сантиметрах и конечную амплитуду его колебаний, 
которая считается остановкой маятника. 
Обеспечьте контроль ввода.

Рекомендации по выполнению
    Считаем, что затухание происходит на каждое качание.

Что оценивается
    Программа правильно считает количество затуханий.
    Цикл не бесконечный.
*/

int main() {
    float damping = 0.084f;
    float startAmpl, finAmpl;
    std::cout << "Введите стартовую и конечную амплитуду: ";
    std::cin >> startAmpl >> finAmpl;
    
    int i = 1;
    while (finAmpl <= startAmpl) {
        startAmpl = startAmpl - startAmpl * damping;
        std::cout << "Колебание: " << i << ". Амплитуда: " << startAmpl << '\n';
        ++i;
    }
    return 0;
}