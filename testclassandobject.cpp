#include <iostream>
#include <string>
using namespace std;
class BankAccount 
{
private:
    string account_number;
    string account_holder_name;
    float balance;

public:
    BankAccount(string acc_number, string holder_name, float initial_balance)
     {
        account_number = acc_number;
        account_holder_name = holder_name;
        balance = initial_balance;
    }
    void deposit(float amount) 
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    void withdraw(float amount) 
    {
        if (amount > balance)
        {
            cout << "Insufficient funds." << endl;
        } else
         {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }
    void display_balance()
     {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("123456789", "Bilal Shah", 1000.0);

    account.deposit(500.0);

    account.withdraw(300.0);
   
    account.display_balance();

    return 0;
}
