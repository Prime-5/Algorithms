#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 50;


    a =  b + (b = a , 0);

    cout << a << " " << b << endl;

    return 0;
}
