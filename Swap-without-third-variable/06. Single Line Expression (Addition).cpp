#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	
	int x, y;
	cin >> x >> y;
	cout << "Before swapping x = " << x << " y = " << y << "\n";
	
	//Swapping
	y = x + y - (x = y);
	cout << "After swapping x = " << x << " y = " << y << "\n";
	
	return 0;
}


/*
* I'd like to point out that even though swapping variables without using
* temporary variables seems nice, it always has a risk associated with it.
* For example if 0 is a number while using multiplication method or if both
* variable have equal values XOR won't work and overflows when using any 
* arithmetic operations. This requires using additional conditions to avoid
* errors. All this risk for an insignificant benifit of little memory space?
* So, using temporary variable is fool proof unless we can limit the input.
*/
