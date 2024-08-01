#include <iostream>

using namespace std;

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}

int main() {
    int num1, num2;

    cout << "Enter two positive integers (both must be greater than 0): ";
    cin >> num1 >> num2;

    cout << "The GCD of " << num1 << " and " << num2 << " is " << GCD(num1, num2) << endl;

    return 0;
}

