#include<bits/stdc++.h>
using namespace std ; 

void swap_numbers(int* a,int* b)
{
	*a = *a + *b ;
	*b = *a - *b ;
	*a = *a - *b ;
	
}

int main()
{
	int *x = 10, *y = 20 ;
	swap_numbers(x , y ) ;
	cout<<*x<<endl ;
	cout<<*y<<endl ;
}
