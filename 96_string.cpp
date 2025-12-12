// visit string using for loop
#include <iostream>
using namespace std;
int main()
{
    string s = "ramlal ji indore wale";
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            s[i] = s[i] - 32;
        }
    }
    cout << s << endl;
    return 0;
}