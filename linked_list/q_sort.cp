#include<bits/stdc++.h>
using namespace std;
#define vect vector<int>
#define loop(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define max(v) *max_element(v.begin(),v.end())


class link
{
public:
	int data;
	link* next;
	link* prev;
	link(int a)
	{
		data=a;
		next=NULL;
		prev=NULL;
	}
};

class l_list
{
public:
	link* head;
	link* tail;
public:
	l_list()
	{
		head=NULL;
		tail=NULL;
	}

	void insert(int a)
	{
		link* new1=new link(a);
		if (head==NULL)
		{
			head=new1;
			tail=new1;
		}
		else
		{
			new1->prev=tail;
			tail->next=new1;
			tail=new1;
		}
	}
	void print_list()
	{
		link* temp=head;
		while(temp)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
};

link* part(link* low, link* high)
{
	link* piv=high;
	link* i=low;
	link* j=low;
	for(j=low;j!=high;j=j->next)
	{
		if(j->data<piv->data)
		{
			swap(i->data,j->data);
			i=i->next;
		}
	}
	swap(i->data,piv->data);

	return i;

}


void sort(link* low,link* high)
{
	// cout<<"p";
	if(low!=high && high!=NULL && low!=high->next)
	{
		link* piv= part(low,high);
		sort(low,piv->prev);
		sort(piv->next,high);
	}

}

int main()
{
	l_list l;
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		l.insert(a);
	}
	l.print_list();
	sort(l.head,l.tail);
	l.print_list();



	return 0;
}
