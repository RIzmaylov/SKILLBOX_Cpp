#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "input A B C:"; cin >> a >> b >> c;
    if(a + b < c || b + c < a || a + c < b)
        std::cout << "No" << std::endl;
    else
        std::cout << "Yes" << std::endl;
    return 0;
}

 
