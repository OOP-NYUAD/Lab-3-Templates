#include <iostream>
#include <vector>
#include <algorithm>

class Account {
public:
    Account(int accountNumber, double balance) : accountNumber(accountNumber), balance(balance) {}

    int getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }

private:
    int accountNumber;
    double balance;
};

// Custom comparison function for sorting by balance in ascending order
bool compareByBalance(const Account& a, const Account& b) {
    // Return a boolean that enables the sort function to sort the accounts in ascending order based on their balence  
}

int main() {
    // Create instances of Account
    Account account1(101, 5000.0);
    Account account2(102, 2500.0);
    Account account3(103, 7500.0);

    // Create a vector to hold Account instances

    // Using the push_back function, add the account1 instance to the vector
    // Using the push_back function, add the account2 instance to the vector
    // Using the push_back function, add the account3 instance to the vector
  

    // Sort the vector by account balance in ascending order
    std::sort(accounts.begin(), accounts.end(), compareByBalance);

    // Display the sorted accounts
    std::cout << "Sorted Accounts by Balance (Ascending Order):\n";
    for (const Account& account : accounts) {
        std::cout << "Account Number: " << account.getAccountNumber() << ", Balance: $" << account.getBalance() << "\n";
    }

    return 0;
}
