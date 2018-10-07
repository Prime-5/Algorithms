#include<bits/stdc++.h>
using namespace std;

int interpolation_search(int *a, int n, int e)
{
    int pos, l=0, u=n-1;

    while(l<=u)
    {
        pos=l+((e-a[l])*(u-l)/(a[u]-a[l]));         //Calculating pos related to weithedness of elements
        if(a[pos]==e)
            return pos;
        else if(a[pos]>e)
            u=pos-1;
        else
            l=pos+1;
    }
    
    return -1;
    
}

int main()
{
    int n,e,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<"\nEnter the element to be searched"<<endl;
    cin>>e;
    
    int ans=interpolation_search(a,n,e);
    if(ans==-1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element found at position "<<ans+1<<endl;
    
    return 0;
}
