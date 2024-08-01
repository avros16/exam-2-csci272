// #include <iostream>

// using namespace std;

// class Account {
// private:
//     double balance;

// public:
//     Account(double initial_balance) : balance(initial_balance) {}

//     void withdraw(const double& amount) {
//         if (amount > 0 && amount <= balance) {
//             balance -= amount;
//         } else {
//             cout << "Invalid withdrawal amount or insufficient funds." << endl;
//         }
//     }

//     void deposit(const double& amount) {
//         if (amount > 0) {
//             balance += amount;
//         } else {
//             cout << "Invalid deposit amount." << endl;
//         }
//     }

//     double getBalance() const {
//         return balance;
//     }
// };

// int main() {
//     Account myAccount(100.0);

//     cout << "Initial Balance: $" << myAccount.getBalance() << endl;

//     myAccount.deposit(50.0);
//     cout << "Balance after depositing $50.0: $" << myAccount.getBalance() << endl;

//     myAccount.withdraw(30.0);
//     cout << "Balance after withdrawing $30.0: $" << myAccount.getBalance() << endl;

//     myAccount.withdraw(150.0);
//     myAccount.deposit(-10.0);

//     return 0;
// }