#include <iostream>
using namespace std;

int main() {
    int n = 5;
    
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = 0; space < n - i; space++) {
            cout << " ";
        }
        
        // Print ascending numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        // Print descending numbers from i-1 to 1
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}
