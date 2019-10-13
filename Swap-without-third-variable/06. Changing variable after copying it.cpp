#include <iostream>

using namespace std;

int swap(int &a, int&b) {
  b = a;
  return 0;
}



int main() {
    int a = 5;
    int b = 50;


    a =  b + swap(a,b);

    cout << a << " " << b << endl;

    return 0;
}
