#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "input year:"; cin >> year;
    if(year <= 0)
        return 0;
    if((year % 100 == 0 && year % 400 == 0) || year % 4 == 0)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}

 
