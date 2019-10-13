#include <iostream>
using namespace std;

/**
	use pointer as the argument 
	so the swap data stored on the respective memory directly.
	
*/

void swap(int *x, int *y)
{
	*x = *x + *y;
	*y = *x  - *y;
	*x = *x - *y;
}

int main() {
	int a=13, b=27;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<a<<" "<<b;
	swap(&a, &b);
	cout << "Swaping again : " << endl << a << " " << b << endl;
	return 0;
}
