// reference variable
#include <iostream>
using namespace std;
void fun(int &n)
{
  printf("n= %d\n", n);
  n = 90;
  printf("n= %d\n", n);
}
int main()
{
  int a = 12;
  fun(a);
  printf("a = %d\n", a);
  return 0;
}