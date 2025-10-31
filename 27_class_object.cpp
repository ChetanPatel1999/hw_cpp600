#include <iostream>
using namespace std;
class mouse
{
public:
  string Cname;
  int price;
  float rating;
};

int main()
{
  mouse m1, m2;

  m1.Cname = "HP";
  m1.price = 200;
  m1.rating = 3.4;

  m2.Cname = "Dell";
  m2.price = 150;
  m2.rating = 4.4;

  cout << "mouse 1 info : " << endl;
  cout << "mouse name :" << m1.Cname << endl;
  cout << "mouse price :" << m1.price << endl;
  cout << "mouse rating :" << m1.rating << endl;

  cout << "mouse 2 info : " << endl;
  cout << "mouse name :" << m2.Cname << endl;
  cout << "mouse price :" << m2.price << endl;
  cout << "mouse rating :" << m2.rating << endl;
  return 0;
}