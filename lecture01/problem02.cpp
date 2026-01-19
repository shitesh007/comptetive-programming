// Q2. Simple Interest Calculation
#include <iostream>
using namespace std;

int main()
{
    int p, r, t;
    cin >> p >> r >> t;
    int SI = (p * r * t) / 100;
    cout << "simple-intrest:" << SI;
    return 0;
}