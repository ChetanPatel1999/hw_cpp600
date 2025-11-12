#include <iostream>
using namespace std;
class account
{
    string acName;
    string acNo;
    int balance;
    static int bankBalance;
    static string bankName;
    static int totalAccount;

public:
    static void creatAccount(account ac[], int index)
    {
        cout << "\nwelcome to create account page \n";
        cout << "enter your name : ";
        cin >> ac[index].acName;
        cout << "enter account number : ";
        cin >> ac[index].acNo;
        cout << "enter amount : ";
        cin >> ac[index].balance;
        bankBalance = bankBalance + ac[index].balance;
        totalAccount++;
        cout << "\naccount create successfully\n\n";
    }

    static void displayAccounts(account ac[], int index)
    {
        if (index > 0)
        {
            int i;
            for (i = 0; i < index; i++)
            {
                cout << "\naccount info : " << endl;
                cout << "account name " << ac[i].acName << endl;
                cout << "account number " << ac[i].acNo << endl;
                cout << "account balance " << ac[i].balance << "\n\n";
            }
        }
        else
        {
            cout << "\nplease frist create account then display\n\n";
        }
    }
};
int account::bankBalance = 0;
string account::bankName = "HDFC";
int account::totalAccount = 0;

int main()
{
    account ac[10];
    int index = 0;
    int num;
    while (1)
    {
        cout << "<----------Welcome to HDFC Bank------------>" << endl;
        cout << "       press 1 to Create new account " << endl;
        cout << "       press 2 to display accounts " << endl;
        cout << "       press 3 to display individual account " << endl;
        cout << "       press 4 to creadit ammount " << endl;
        cout << "       press 5 to debit ammount " << endl;
        cout << "       press 6 to display total bank belance  " << endl;
        cout << "       press 7 to exit from bank  " << endl;
        cout << "choose any option : ";
        cin >> num;
        switch (num)
        {
        case 1:
            account::creatAccount(ac, index);
            index++;
            break;
        case 2:
            account::displayAccounts(ac, index);
            break;
        case 3:
            cout << "call display individual account method" << endl;
            break;
        case 4:
            cout << "call creadit amount method" << endl;
            break;
        case 5:
            cout << "call debit amount method" << endl;
            break;
        case 6:
            cout << "call totalamount display method" << endl;
            break;
        case 7:
            exit(0);
            break;
        default:
            cout << "\nyou choosed wrong option\n\n";
        }
    }
    return 0;
}