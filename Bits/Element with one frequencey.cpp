/*
Given that all the inputs occur thrice, except for one which occur only once. 
Program to find the one.
*/

#include<bits/stdc++.h>
#define N 32
using namespace std;

int main()
{
	int n,i,ans=0,e,j;
	cin>>n;
	
	int a[N]={0};
	for(i=0;i<n;i++)
	{
		cin>>e;
		bitset<N> bit(e);		//Converting number to binary
		for(j=0;j<N;j++)
			a[j]+=bit[j];		//Adding corresponding bits of binary convertions
	}
	
	for(i=0;i<N;i++)
	{
		a[i]=a[i]%3;			//Bits of no. with freq 3 gets removed
	}
	for(i=0;i<N;i++)
	{
		ans+=a[i]*pow(2,i);		//Converting final answer's binary to decimal.
	}
	
	cout<<ans;
}
