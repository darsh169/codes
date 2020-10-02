#include<bits/stdc++.h>
#include<string>
using namespace std;

class listnode
{
public:
	int data;
	listnode* next;
	listnode(int x)
	{
		data=x;
		next=NULL;
	}

};
listnode* cal(listnode* A,int B,int C)
{
	int b=0,c=0;
	listnode* start=A;
	listnode* end=A;
	listnode* prev1=start;
	listnode* prev2=end;
	while(b<B-1)
	{
		prev1=start;
		start=start->next;
		b++;
	}
	while(c<C-1)
	{
		prev2=end;
		end=end->next;
		c++;
	}
	listnode* endnext=end->next;
	end->next=NULL;
	listnode* temp=start;
	listnode* prev=endnext;
	while(temp)
		{
			listnode* next1=temp->next;
			temp->next=prev;
			prev=temp;
			temp=next1;
		}
	if(start==A)
	{
		A=prev;
	}
	else
	{
		prev1->next=prev;
	}
	return A;
}
listnode* cal2(listnode* A,int B,int C)
{
	if(B!=1)
	{
		A->next=cal2(A->next,B-1,C-1);
		return A;
	}
}
void printlist(listnode* a)
{
	listnode* temp=a;
	while(temp)
	{
		cout<<temp->data;
	 	temp=temp->next;
	}
}

int main()
{
	listnode* a=new listnode(1);
	listnode*b=new listnode(2);
	listnode*c=new listnode(3);
	listnode*d=new listnode(4);
	listnode*e=new listnode(5);
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=e;
	listnode* temp=a;
	printlist(a);
	cout<<endl;
	printlist(cal1(a,2,4));

	return 0;
}
