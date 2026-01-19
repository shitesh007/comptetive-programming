// . Find the Factorial of a Number
#include <iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    return fact;
}
int main() {
    int number;
    cin>>number;
    cout<<"factorial:"<<fact(number)<<endl;
    return 0;
}