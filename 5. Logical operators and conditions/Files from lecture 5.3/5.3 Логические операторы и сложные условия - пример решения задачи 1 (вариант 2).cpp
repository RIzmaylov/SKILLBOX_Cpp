#include <iostream>

using namespace std;

int main()
{
    int amount;
    cout << "input number:"; cin >> amount;
    if(amount <= 0)
        return 0;
    if(amount % 100 == 0 && amount <= 100000) // если 100 рублевыми купюрами без сдачи и не более
    {
            std::cout << "Ok" << std::endl;
    }
    else
    {
        std::cout << "Failed: Over the limit or must be multiple of 100" << std::endl;
    }

    return 0;
}

 
