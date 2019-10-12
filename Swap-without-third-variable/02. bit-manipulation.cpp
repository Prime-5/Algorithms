#include <iostream>

using namespace std;

int main(void) {
	int a=13, b=27;
  
  cout << "Before swap: " << endl;
  cout << "\t a = " << a << ", b = " << b << endl;
  
  a = a ^ b;
  b = b ^ a;
  a = a ^ b;

  cout << "After swap: " << endl; 
  cout << "\t a = " << a << ", b = " << b << endl;
}
