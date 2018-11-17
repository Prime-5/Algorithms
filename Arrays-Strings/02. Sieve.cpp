#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,lower,upper,i,j;

	cin>>a>>b;
	
	lower=min(a,b);
	upper=max(a,b);
	
	int sieve[upper+1]={0};
	sieve[0]=sieve[1]=1;
	
	for(i=0;i<=upper;i++)
	{
		if(sieve[i]==0)
		{	for(j=2*i;j<=upper;j+=i)
			{	sieve[j]=1;
			}
		}
	}
	
	for(i=lower;i<=upper;i++)
	{	if(sieve[i]==0)
			cout<<i<<" ";
	}
	
	return 0;
}
	
