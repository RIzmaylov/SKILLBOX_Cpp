#include <iostream>

/*
В «Спейс Инжиниринг» были впечатлены тем, как вы справились с кофемашиной и решили отдать вам на аутсорс разработку 
программы для нового робота-разведчика поверхности Марса. 
Это первый прототип, поэтому он тестируется в прямоугольном помещении размером 15 на 20 метров. 
Марсоход высаживается в центре комнаты, после чего управление им передаётся оператору — пользователю вашей программы. 
Программа спрашивает, в какую сторону оператор хочет направить робота: 
север (клавиша W), юг (клавиша S), запад (клавиша A) или восток (клавиша D). 
Оператор делает выбор, марсоход перемещается на 1 метр в эту сторону и программа сообщает новую позицию марсохода. 
Если марсоход упёрся в стену, то он не должен пытаться перемещаться в сторону стены, в этом случае его позиция не меняется.

Пример выполнения

[Программа]: Марсоход находится на позиции 6, 19, введите команду: 
[Оператор]: A 
[Программа]: Марсоход находится на позиции 5, 19, введите команду: 
[Оператор]: W 
[Программа]: Марсоход находится на позиции 5, 20, введите команду: 
[Оператор]: W 
[Программа]: Марсоход находится на позиции 5, 20, введите команду: 
[Оператор]: S 
[Программа]: Марсоход находится на позиции 5, 19, введите команду: 
[Оператор]: S 
[Программа]: Марсоход находится на позиции 5, 18, введите команду: 
…

Рекомендации по выполнению
    Необходимо обеспечить контроль ввода пользователя и сообщать об ошибке в случае неправильного ввода.
    Помните об ограничениях комнаты при перемещении робота.
Что оценивается
    Использованы конструкции else и else if.
    Координаты марсохода не выходят за границы помещения.
    Программа не завершает работу если робот упёрся в стенку.
*/

int main() {
    int fieldX = 15, fieldY = 20;
    std::string reqComm;
    int positionX = 7, positionY = 10;

    std::cout << "Добро пожаловать в программу управления марсоходом!.\n";
    std::cout << "Для управления марсоходом используйте команды W, A, S, D\n";
    std::cout << "Для выхода из программы команда - Q\n";
    while(true) {
        std::cout << "Марсоход находится в координатах: {" << positionX << " , " << positionY << "}, введите команду: ";
        std::cin >> reqComm;
        while (!(reqComm == "W" || reqComm == "A" || reqComm == "S" || reqComm == "D" || reqComm == "Q")) {
            std::cout << "Введите корректную команду, для управление - W, A, S, D, для выхода - Q: ";
            std::cin >> reqComm;
        }
        if (reqComm == "W") {
            if (positionX > 0) positionX--;
        } else if (reqComm == "A") {
            if (positionY > 0) positionY--;
        } else if (reqComm == "S") {
            if (positionX < fieldX) positionX++;
        } else if (reqComm == "D") {
            if (positionY < fieldY) positionY++;
        } else break;
    }
    
    return 0;
}