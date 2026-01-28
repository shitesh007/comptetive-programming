#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Top half (increasing stars)
    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int j = i; j < n; j++) {
            cout << "  "; 
        }
        // print stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Bottom half (decreasing stars)
    for (int i = n-1; i >= 1; i--) {
        // print spaces
        for (int j = n; j > i; j--) {
            cout << "  ";
        }
        // print stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
