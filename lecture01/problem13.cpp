// Reverse a Number using a While Loop
#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int reversed = 0;
    while (number > 0)
    {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    cout << "Reversed: " << reversed;
    
    return 0;
}
