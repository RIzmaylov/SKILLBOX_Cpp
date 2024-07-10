#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "input x y:"; cin >> x >> y;
    if(x > 0 && y > 0)
    {
            std::cout << "1" << std::endl;
    }
    else if(x < 0 && y > 0)
    {
            std::cout << "2" << std::endl;
    }
    else if(x < 0 && y < 0)
    {
            std::cout << "3" << std::endl;
    }
    else if(x > 0 && y < 0)
    {
            std::cout << "4" << std::endl;
    }
    else
    {
        std::cout << "On the border" << std::endl;
    }
    return 0;
}

 
