#include <iostream>
using namespace std;

int countDigits(int number) {
    int count = 0;
    if (number == 0) {
        return 1;
    }
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}/

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    num = abs(num);

    int digitCount = countDigits(num);
    cout << "The number of digits in the number is: " << digitCount << endl;

    return 0;
}
