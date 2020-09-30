#include<bits/stdc++.h>
using namespace std;

class array
{
public:
	int *a,i,j;
	int size;
	array(int n)
	{
		size=n;
		a=(int*)malloc(n*sizeof(int));
	}
	void read()const
	{
		for(int i=0;i<size;i++)
			cin>>a[i];
		cout<<"stop";
	}
	void print()const
	{
		for(int i=0;i<size;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	void replace(int  c,int  b)
	{
		for(i=0;i<size;i++)
		{
			if(a[i]==c)
				break; 
		}
		if(i==size)
			cout<<c<<" Not found";
		else
			a[i]=b;

	}

};

int main()
{
	int n;
	cout<<"enter the array size: "<<endl;
	cin>>n;
	array t(n);
	t.read();
	t.print();
	int a,b;
	cout<<"enter replacing pair: "<<endl;
	cin>>a>>b;
	t.replace(a,b);
	t.print();

	return 0;
}
