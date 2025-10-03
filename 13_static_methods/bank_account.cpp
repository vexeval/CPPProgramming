#include <iostream>

class BankAccount {
public:
    BankAccount(int acc_num) : account_number(acc_num) {
        total_accounts++;
    }

    // Destructor
    ~BankAccount() {
        total_accounts--;
    }

    static int getTotalAccounts() {
        return total_accounts;
    }

private:
    static int total_accounts;
    int account_number;
};

int BankAccount::total_accounts = 0;

int main(void)
{
    std::cout << BankAccount::getTotalAccounts() << std::endl;
    for (int i = 0; i < 10; i++) {
        BankAccount ba(123);
        std::cout << BankAccount::getTotalAccounts() << std::endl;
    }
    std::cout << BankAccount::getTotalAccounts() << std::endl;
    
    return 0;
}