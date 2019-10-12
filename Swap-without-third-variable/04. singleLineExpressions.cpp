#include <iostream>
using namespace std;

void swap(int &x , int &y){

	x = (x*y)/(y=x);
}

int main()
{
	int x = 5, y = 8;
	swap(x,y);
	cout<<x<<endl;
	cout<<y<<endl;
	return 0;
}
