#include <iostream>
// using namespace std;
int main()
{
    int a, b, c;
    std::cout << "enter a : ";
    std::cin >> a;
    std::cout << "enter b : ";
    std::cin >> b;
    c = a + b;
    std::cout << "sum of " << a << " and " << b << " = " << c<<std::endl;
    return 0;
}