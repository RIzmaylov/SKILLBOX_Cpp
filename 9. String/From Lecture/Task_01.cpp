#include <iostream>
/*
Напишите программу, которая принимает от пользователя текст (то есть некоторую строку) 
и ещё слово (то есть ещё строку) и подсчитывает, сколько раз слово встречается в тексте. 
Более точно: сколько в данном тексте существует позиций, начиная с которых можно прочитать данное слово.
*/

int main() {
    std::string text, word;
    std::getline(std::cin, text);
    std::getline(std::cin, word);

    int resCnt = 0;
    for (int i = 0; i <= text.length() - word.length(); ++i) {
        bool flag = true;
        for (int j = 0; j < word.length(); ++j) {
            if (text[i + j] != word[j]) {
                flag = false;
                break;
            }
        }
        if (flag) resCnt++;
    }

    std::cout << resCnt << std::endl;
    return 0;
}