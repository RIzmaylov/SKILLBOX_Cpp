#include <iostream>

/*
Поезд отправляется в AA часов BB минут и прибывает в пункт назначения в CC часов DD минут. 
Сколько часов и минут он находится в пути?

Напишите программу, которая принимает от пользователя две строки — время отправления и время прибытия поезда. 
Время задаётся строкой из пяти символов в формате HH:MM. Обеспечьте контроль ввода, убедитесь также, что время корректно.

Программа должна ответить, сколько часов и минут поезд находится в пути. 
Если время отправления больше времени прибытия, считайте, что поезд прибывает в пункт назначения на следующий день.

Примеры выполнения
Введите время отправления (HH:MM): 09:20

Введите время прибытия (HH:MM): 10:20

Поездка составила 1 ч. 0 мин.

Введите время отправления (HH:MM): 09:20

Введите время прибытия (HH:MM): 08:40

Поездка составила 23 ч. 20 мин.

Что оценивается
    Программа корректно считает и время в течение суток, и время поездки с прибытием на следующий день.
    Обеспечен контроль ввода и по длине строк, и по вводимым символам.
*/

bool checkTime(int& hour, int& minute, const std::string& timeString) {
    if (timeString.length() != 5 || timeString[2] != ':' || timeString[0] < '0' 
            || timeString[0] > '9' || timeString[1] < '0' || timeString[1] > '9' 
            || timeString[3] < '0' || timeString[3] > '9' || timeString[4] < '0' 
            || timeString[4] > '9') {
        return false;
    } else {
        int tempHour = 10 * (timeString[0] - '0') + (timeString[1] - '0');
        int tempMinute = 10 * (timeString[3] - '0') + (timeString[4] - '0');

        if (tempHour > 23 || tempMinute > 59) {
            return false;
        } else {
            hour = tempHour;
            minute = tempMinute;
        }
    }
    return true;
}

int main() {
    std::string startTime, finishTime;
    std::cout << "Введите время отправления (HH:MM): ";
    std::cin >> startTime;
    std::cout << "Введите время прибытия (HH:MM): ";
    std::cin >> finishTime;

    int startHours, startMinutes;
    int finishHours, finishMinutes;
    
    if (checkTime(startHours, startMinutes, startTime) && checkTime(finishHours, finishMinutes, finishTime)) {
        int tripDuration = (60 * finishHours + finishMinutes) - (60 * startHours + startMinutes);
        if (tripDuration < 0) {
            tripDuration += 1440;
        }
        std::cout << "Поездка составила " << tripDuration / 60 << " ч. " << tripDuration % 60 << " мин.";
    } else {
        std::cout << "Время введено неверно!";
    }

    
    return 0;
}