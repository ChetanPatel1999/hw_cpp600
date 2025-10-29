#include <iostream>
using namespace std;
void pattern()
{
    int i, j;
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 25; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    pattern();
    cout << "           name : dipesh barnashiya" << endl;
    pattern();
    cout << "           collage : medicaps" << endl;
    pattern();
    cout << "             age : 20" << endl;
    pattern();
    cout << "           qualification : nothing" << endl;
    pattern();
    return 0;
}