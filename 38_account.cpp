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

    static void displayAccount(account ac[], int index)
    {
        if (index > 0)
        {
            int i, f = 0;
            string number;
            cout << "\nenter account number : ";
            cin >> number;
            for (i = 0; i < index; i++)
            {
                if (number == ac[i].acNo)
                {
                    f = 1;
                    cout << "\naccount info : " << endl;
                    cout << "account name " << ac[i].acName << endl;
                    cout << "account number " << ac[i].acNo << endl;
                    cout << "account balance " << ac[i].balance << "\n\n";
                }
            }
            if (f == 0)
            {
                cout << "\n wrong account number\n"
                     << endl;
            }
        }
        else
        {
            cout << "\nplease frist create account then display\n\n";
        }
    }

    static void creaditamount(account ac[], int index)
    {
        if (index > 0)
        {
            int i, f = 0, amt;
            string number;
            cout << "\nenter account number : ";
            cin >> number;
            cout << "enter amount to credit : ";
            cin >> amt;
            for (i = 0; i < index; i++)
            {
                if (number == ac[i].acNo)
                {
                    f = 1;
                    ac[i].balance = ac[i].balance + amt;
                    bankBalance = bankBalance + amt;
                    cout << "\n"
                         << amt << " amount is credit succefully\n\n";
                }
            }
            if (f == 0)
            {
                cout << "\n wrong account number\n"
                     << endl;
            }
        }
        else
        {
            cout << "\nplease frist create account then creadit amount\n\n";
        }
    }

    static void debitamount(account ac[], int index)
    {
        if (index > 0)
        {
            int i, f = 0, amt;
            string number;
            cout << "\nenter account number : ";
            cin >> number;
            cout << "enter amount to debit : ";
            cin >> amt;
            for (i = 0; i < index; i++)
            {
                if (number == ac[i].acNo)
                {
                    f = 1;
                    if (amt <= ac[i].balance)
                    {
                        ac[i].balance = ac[i].balance - amt;
                        bankBalance = bankBalance - amt;
                        cout << "\n"
                             << amt << " amount is debit succefully\n\n";
                    }
                    else
                    {
                        cout << "\n you have not sufficient balace" << endl;
                        cout << "you have only " << ac[i].balance << endl;
                        cout << "and you try to  debit " << amt << endl
                             << endl;
                    }
                }
            }
            if (f == 0)
            {
                cout << "\n wrong account number\n"
                     << endl;
            }
        }
        else
        {
            cout << "\nplease frist create account then debit amount\n\n";
        }
    }
    static void displayTotalBankBalance()
    {
        cout << "\nbank name : " << bankName << endl;
        cout << "total account in bank : " << totalAccount << endl;
        cout << "total bank balance  : " << bankBalance << endl
             << endl;
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
            index++; // 2
            break;
        case 2:
            account::displayAccounts(ac, index);
            break;
        case 3:
            account::displayAccount(ac, index);
            break;
        case 4:
            account::creaditamount(ac, index);
            break;
        case 5:
            account::debitamount(ac, index);
            break;
        case 6:
            account::displayTotalBankBalance();
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