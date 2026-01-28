// *
// * * *
// * * * * *
// * * * * * * *
// * * * * * * * * *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int J = 1; J <= (2*i-1); J++)
        {
            cout<<i ;
        }
        
        cout << endl;
    }

    return 0;
}