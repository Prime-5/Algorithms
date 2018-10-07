/*
Generating subarrays using Recursion.
Time : O(2^n)
*/

#include <bits/stdc++.h>
using namespace std;

int n;
void sub(int *a, int start, int end)
{
    if(end==n)
        return;
    
    else if(start>end)
        sub(a, 0, end+1);
        
    else
    {
        for(int i=start; i<=end; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        sub(a, start+1, end);
    }
}

int main()
{
    int i;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    
    cout<<"\nEnter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"\nSub-arrays are : "<<endl;
    sub(a,0,0);
    
    return 0;
    
}
