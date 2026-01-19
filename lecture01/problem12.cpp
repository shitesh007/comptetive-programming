// Find the Sum of Digits of a Given Number using a Loop
#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int sum = 0;
    while (number > 0)
    {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    cout << "sum:" << sum;
    return 0;
}