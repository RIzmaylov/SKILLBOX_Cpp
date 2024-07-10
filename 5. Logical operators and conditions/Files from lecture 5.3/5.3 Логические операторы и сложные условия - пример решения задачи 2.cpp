#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout << "input A B C D:"; cin >> a >> b >> c >> d;
    if(a > 1200 || b > 1200 || c > 1200 || d > 1200)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
    return 0;
}

 
