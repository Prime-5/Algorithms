#include<bits/stdc++.h>
using namespace std;

struct node
{
	int a;
	node *next;
};
node *head1=NULL, *head2=NULL;


void display(node *h)		//Display the list whose head is h.
{
	node *s=h;
	while(s->next!=NULL)
	{	cout<<s->a<<" -> ";
		s=s->next;
	}
	cout<<s->a;
}


void sublist(node *h1, node *h2)
{
	node *s1=h1, *s2=h2;
	while(s1!=NULL && s2!=NULL)
	{	if(s1->a==s2->a)
		{	s1=s1->next;
		}
		else
		{	s1=h1;
		}
		s2=s2->next;
	}
	
	if(s1==NULL)
	{	cout<<"\nList 1 is a sublist of list 2";
	}
	else if(s2==NULL)
	{	cout<<"\nList 1 is not a sublist of list 2";
	}
}


int main()
{	node *p, *s;
	
	//Entering elements of first list	
	cout<<"\nEnter the size of 1st list"<<endl;
	int n,e,i;
	cin>>n;

	cout<<"\nEnter the elements"<<endl;
	for(i=0;i<n;i++)
	{	cin>>e;
		p=new node;
		p->a=e;
		p->next=NULL;

		if(head1==NULL)
		{	head1=p;
		}
		else
		{	s=head1;
			while(s->next!=NULL)
				s=s->next;
			s->next=p;
		}
	}
	
	

	//Entering elements of second list
	cout<<"\nEnter the size of 2nd list"<<endl;
	int m;
	cin>>m;

	cout<<"\nEnter the elements"<<endl;
	for(i=0;i<m;i++)
	{	cin>>e;
		p=new node;
		p->a=e;
		p->next=NULL;

		if(head2==NULL)
		{	head2=p;
		}
		else
		{	s=head2;
			while(s->next!=NULL)
				s=s->next;
			s->next=p;
		}
	}

	
	//Display the lists
	cout<<"\nList 1 : ";
	display(head1);

	cout<<"\nList 2 : ";
	display(head2);	
	
	
	
	//Checking if list1 is a sublist of list2
	sublist(head1, head2);	
	

	cout<<endl<<endl;
	return 0;
}








