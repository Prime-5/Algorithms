/*
Jump Search
Time complexity : O(n^1/2)
Auxiliary space : O(1)
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int jump_search(int *a, int n, int e)
{
	int m=sqrt(n),i,j;
	if(e<a[0])	
		return -1;
	for(i=0;i<n;i+=m)
	{
		if(a[i]==e)
			return i;
		else if(a[i]>=e)
		{	
			int j=i;
			while(j>=i-m)
			{	if(a[j]==e)
					return j;
				else
					j--;
			}
			return -1;
		}
	}
	return -1;

}

int main()
{
	int n, i,e;
	cout<<"\nEnter the size"<<endl;
	cin>>n;
	
	cout<<"\nEnter the elements"<<endl;
	int a[n];
	for(i=0;i<n;i++)
	{	cin>>a[i];
	}

	x:
	cout<<"\nEnter the element to be searched"<<endl;
	cin>>e;

	int pos=jump_search(a,n,e);
	if(pos>=0)
		cout<<"Element found at index "<<pos;
	else
		cout<<"\nNot found";
	cout<<endl<<endl;

	goto x;
	return 0;
}
