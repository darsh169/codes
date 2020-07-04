#include <bits/stdc++.h>
using namespace std;

class array
{
private:
	vector<int>v;
	int n;
public:
	array(int max)
	{
		//v.resize(max);
		n=max;
	}
	void read()
	{
		int i;
		for(i=0;i<n;i++)
		{
			int c;
			cin>>c;
			v.push_back(c);
			//cout<<endl;
		}
	}

	void bub_sort()
	{
		int i,out;
		for(out=n-1;out>0;out--)
		{
			for(i=0;i<out;i++)
			{
				if(v[i]>v[i+1])
				{
					swap(v[i],v[i+1]);
				}
			}
		}
	}

	// void swap(int i,int j)
	// {
	// 	int temp=v[i];
	// 	v[i]=v[j];
	// 	v[j]=temp;
	// }

	void display()
	{
		int i;
		for(i=0;i<v.size(); i++)
			cout<<v[i]<<" ";
	}
};

int main()
{
	int a;
	cout<<"enter array size: ";
	cin>>a;
	array arr(a);
	arr.read();
	arr.display();
	cout<<endl;
	arr.bub_sort();
	cout<<"sorted->"<<endl;
	arr.display();

	return 0;
}