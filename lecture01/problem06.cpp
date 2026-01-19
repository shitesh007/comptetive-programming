// Grade Card Program (Based on Marks)
#include <iostream>
using namespace std;

int main() {
    int marks;
    cin>>marks;

    if(marks>70){
        cout<<"A";
    }
    else if(marks>50){
        cout<<"B";
    }
    else if(marks>30){
        cout<<"c";
    }
    else{
        cout<<"fail";
    }
    return 0;
}