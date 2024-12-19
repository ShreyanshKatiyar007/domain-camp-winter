#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 1) {
        cout << "invalid number" << endl;
    } else {
        sum = (n * (n + 1)) / 2;

        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }

    return 0;
}
