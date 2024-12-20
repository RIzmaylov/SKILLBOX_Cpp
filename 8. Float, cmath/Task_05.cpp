#include <iostream>
#include <cmath>

/*
Самуэль родился в Кении, и когда он немного подрос, то решил сделать карьеру профессионального бегуна. 
Во время тренировок на стадионе он стал запоминать свой темп на каждом километре с помощью простых наручных часов с 
секундной стрелкой. После тренировки он хотел бы узнать свой средний темп бега, но не может этого сделать: 
в Кении дети, решившие стать бегунами, обычно не ходят в школу. 
Помогите Самуэлю.

Напишите программу для расчёта среднего темпа бега. 
Темп измеряется в секундах на километр и означает количество времени, которое бегун потратит на преодоление одного километра. 
Программа должна получить на вход количество километров, покрытое за тренировку, 
и темп в секундах на каждый из этих километров. 
На выходе программа выводит на экран средний темп в минутах и секундах за всю тренировку. 
Обеспечьте контроль ввода.

Пример выполнения

Ввод:

Привет, Сэм! Сколько километров ты сегодня пробежал? 6

Какой у тебя был темп на километре 1? 305

Какой у тебя был темп на километре 2? 291

Какой у тебя был темп на километре 3? 343

Какой у тебя был темп на километре 4? 255

Какой у тебя был темп на километре 5? 279

Какой у тебя был темп на километре 6? 312

Вывод:

Твой средний темп за тренировку: 4 минуты 58 секунд.

Рекомендации по выполнению
    Чтобы добиться требуемого результата, необходимо воспользоваться функцией округления.

Что оценивается
    Важно, чтобы время среднего темпа было выведено в формате «минуты и секунды», как в примере.
*/

int main() {
    int secCnt = 0, kmCnt = 0;
    std::cout << "Ввод: \n";
    std::cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? ";
    std::cin >> kmCnt;

    int allSec = 0;

    for (int i = 1; i <= kmCnt; ++i) {
        std::cout << "Какой у тебя был темп на километре " << i << "? "; 
        int curSec;
        std::cin >> curSec;
        allSec += curSec; 
    }
    float averageSec = (float) allSec / kmCnt;
    int hoursCnt = averageSec / 60;
    int secRemain = std::round(averageSec - hoursCnt * 60);

    std::cout << "Вывод: \n";
    std::cout << "Твой средний темп за тренировку: " << hoursCnt << " минуты " << secRemain << " секунд.";

    return 0;
}