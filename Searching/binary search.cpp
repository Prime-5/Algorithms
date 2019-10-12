#include<iostream>
using namespace std;
int main()
{
	int i,n,k,beg=0,end,mid,f=0,ar[100],ele;
	cout<<"Enter Your no. of element";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	end=n-1;
	cout<<"Enter element to find=";
	cin>>ele;
	while(beg<=end)
	{
		mid=(end+beg)/2;
		if(ar[mid]==ele)
		{
			k=mid+1;
			f=1;
			break;
		}
		else if(ar[mid]<ele)
		{
			beg=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	if(f==1)
	{
		cout<<"Your Element is in "<<k<<" position";
	}
	else
	{
	cout<<"element not found";
	
	}
	return 0;
}
