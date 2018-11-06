//Menu driven code to implement trivial hashing supporting negative numbers as well
#include <iostream>
using namespace std;

void insert_ele(int Hash[][2], int size)
{
    	int a;
    	cin>>a;
    	if(abs(a)>size)
    	{
    	    cout<<"Element larger than mentioned size"<<endl;
    	    return;
    	}
    	
		if(a>=0)
		{	if(Hash[a][0]==1)
		    {   cout<<"Element already exists"<<endl;
		    }
		    else
		    {   Hash[a][0]=1;
		        cout<<"Element inserted successfully"<<endl;
		    }
		}
		else
		{	if(Hash[abs(a)][1]==1)
		    {   cout<<"Element already exists"<<endl;
		    }
		    else
		    {   Hash[abs(a)][1]=1;
		        cout<<"Element inserted successfully"<<endl;
		    }
		}
}

void del_ele(int Hash[][2], int size)
{
    int e;
    cin>>e;
    if(e>0)
    {   if(Hash[e][0]==1)
        {   Hash[e][0]=0;
            cout<<"Element deleted successfully"<<endl;
        }
        else
        {   cout<<"Element never existed"<<endl;
        }
    }
    else
    {
        if(Hash[abs(e)][1]==1)
        {   Hash[abs(e)][1]=0;
            cout<<"Element deleted successfully"<<endl;
        }
        else
        {   cout<<"Element never existed"<<endl;
        }
    }
}

void display(int Hash[][2], int size)
{
	int i;
	for(i=size-1;i>=0;i--)
		if(Hash[i][1]==1)
			cout<<-i<<" ";
	
	for(i=1;i<size;i++)
		if(Hash[i][0]==1)
			cout<<i<<" ";
}

void choose(int Hash[][2], int size)
{
    cout<<"\nChoose : "<<endl;
    cout<<"1. Insert"<<endl;
    cout<<"2. Delete"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Exit"<<endl;
    
    int a;
    cin>>a;
    switch(a)
    {
        case 1 : insert_ele(Hash, size); break;
        case 2 : del_ele(Hash, size); break;
        case 3 : display(Hash, size); break;
        case 4 : exit(0);
        default : cout<<"Invalid choice"<<endl;
    }
    getchar();
}

int main() 
{
	int n, max,i;
	cout<<"\nEnter the initial no. of numbers to be entered"<<endl;
	cin>>n;
	
	cout<<"Enter the max number, + or -, allowed"<<endl;
	cin>>max;
	
	int Hash[max+1][2]={0};
	
	cout<<"\nEnter the elments"<<endl;
	for(i=0;i<n;i++)
	{
		insert_ele(Hash, max+1);
	}
	
	cout<<"\nCurrent hash table is : "<<endl;
	display(Hash, max+1);
	
	while(1)
	    choose(Hash, max+1);
	
	return 0;
}
