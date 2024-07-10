#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "input A B C:"; cin >> a >> b >> c;
    if(a == b && b == c)
        std::cout << "3" << std::endl;
    else if(a == b || b == c || c == a)
        std::cout << "2" << std::endl;
    else
        std::cout << "0" << std::endl;
    return 0;
}

 
