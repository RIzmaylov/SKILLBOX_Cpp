#include <iostream>

/*
Есть код программы с двумя переменными типа int и выводом этих переменных на экран. 
Напишите программу, которая меняет значения переменных местами, то есть нужно добиться того, 
чтобы в переменной a лежит значение b, а в b — значение a.

Советы и рекомендации
Самый простой способ взаимно менять значения переменных — использовать swap (a, b). 
Тем не менее важно понимать, как работает операция по обмену значений двух переменных.

Для начала посмотрим неправильную реализацию и выясним, что в ней не так.

Ошибочная реализация

a = b;

b = a;

Если вы попытаетесь выполнить обмен значений этим способом, 
то увидите, что теперь в обеих переменных хранится значение переменной b. 
Происходит это из-за построчного выполнения кода. 
Первая операция присваивания сохраняет значение переменной b в переменную a. 
Затем вторая — новое значение a в b, иными словами, значение b в b. 
Таким образом, мы полностью теряем содержание контейнера a. 
В решении необходимо придумать способ, при котором содержимое переменных теряться не будет, 
а значения переменных поменяются местами.

Что оценивается
По окончании работы алгоритма обмена в переменной a должно лежать значение, которое изначально лежало в переменной b, 
и наоборот.
*/
int main() {
    int a = 0, b = 0, c = 0;
    std::cout << "Меняем переменные!\n";
    std::cout << "Введите число a - ";
    std::cin >> a;
    std::cout << "Введите число b - ";
    std::cin >> b;

    c = a;
    a = b;
    b = c;
    
    std::cout << "\nМеняем местами!\n";
    std::cout << "Значение в a - " << a << '\n';
    std::cout << "Значение в b - " << b << '\n';
    
    return 0;
}