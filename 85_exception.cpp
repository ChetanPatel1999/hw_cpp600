#include <iostream>
using namespace std;
int main()
{
    int x = -12;
    try
    {
        if (x < 0)
        {
            throw 12.6f;
        }
    }
    catch (int a)
    {
        cout << "int catch block is exicute" << endl;
    }
    catch (double a)
    {
        cout << "double catch block is exicute" << endl;
    }
    catch (char ch)
    {
        cout << "char catch is exicute";
    }
    catch (...)
    {
        cout << "default catch block is exicute" << endl;
    }
    cout << "program run succefully" << endl;
    return 0;
}