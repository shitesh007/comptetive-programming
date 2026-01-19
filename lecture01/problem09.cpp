// Print the Multiplication Table of 7
#include <iostream>
using namespace std;

int main() {
    int number = 7;
    for (int i = 1; i <= 10; i++)
    {
        cout << number << " x " << i << " = " << number * i << "\n";
    }
    
    return 0;
}