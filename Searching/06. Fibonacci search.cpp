/*
Fibonacchi Search.
Time : O(log n)
Auxiliary space : O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int fib_search(int *a, int n, int e)
{
	int fib=2, fib1=1, fib2=0, offset=0, pos;
	while(fib<n)
	{	fib2=fib1;
		fib1=fib;
		fib=fib1+fib2;
	}			//fib is a fibonacci no. just greater than n.

	cout<<fib<<endl;

	while(fib1>0)
	{	pos=min(fib2+offset, n-1);
		cout<<pos<<" ";
		if(a[pos]==e)
			return pos;
		else if(a[pos]<e)
		{	offset=pos;       //Set offset to pos, drop fib by 1
			fib=fib1;
			fib1=fib2;
			fib2=fib-fib1;
		}
		else
		{	fib=fib1;         //Offset remains same. Drop fib by 2.
			fib1=fib2;
			fib2=fib-fib1;
			fib=fib1;
			fib1=fib2;
			fib2=fib-fib1;
		}
	}

	if(fib1==0 && a[offset]==e)
		return offset+1;

	return -1;
}
		

int main()
{
	int n,e,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{	cin>>a[i];
	}

	cout<<"\nEnter the element to be searched"<<endl;
	cin>>e;

	int ans = fib_search(a,n,e);
	if(ans>=0)
		cout<<"\nElement found at position : "<<ans+1<<endl;
	else
		cout<<"\nElement not found"<<endl;


	return 0;
}
