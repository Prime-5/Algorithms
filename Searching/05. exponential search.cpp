/*
Exponential search
Running Time : O(log n)
Auxiliary space : O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int binary_search(int *a, int n, int l, int u, int e)
{
    int m;	
    while(l<=u)
    {
        m=(l+u)/2;
        if(e==a[m])
            return m;
        else if(e<a[m])
            u=m-1;
        else
            l=m+1;
    }
    return -1;
}

int exponential_search(int *a, int n, int e)
{
    int m=1;
    while(m<=n)
    {
	cout<<a[m-1]<<" ";
        if(e==a[m-1])
            return m-1;
        else if(e>a[m-1])
        {   m*=2;
	    if(m>n)
		return binary_search(a,n,m/2,n-1,e);
	}
        else
            return binary_search(a, n, m/2-1, m-1, e);
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int e;
    cin>>e;
    
    int i = exponential_search(a, n,e);
    if(i>=0)
        cout<<"\nElement found at position : "<<i<<endl;
    else
        cout<<"\nElement not found"<<endl;
        
    return 0;
}
