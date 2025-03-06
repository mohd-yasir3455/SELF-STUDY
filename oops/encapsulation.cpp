#include <iostream>

class BankAccount {
private:
    double balance;  // Sensitive data

protected:
    std::string accountType;  // Can be accessed by derived classes

public:
    void deposit(double amount) {  // Public method
        if (amount > 0)
            balance += amount;
    }

    double getBalance() {  // Getter function
        return balance;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.deposit(1000);
    std::cout << "Balance: " << myAccount.getBalance() << "\n";
    return 0;
}
