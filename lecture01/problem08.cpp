// Find the Sum of N Natural Numbers
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int n;
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    cout<<"sum :"<<sum;
    return 0;
}