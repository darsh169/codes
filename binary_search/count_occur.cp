#include<bits/stdc++.h>
using namespace std;

int bin_s(vector<int>a,int n,int l,int h)
{
	while (l<=h)
	{
		int mid=(l+h)/2;
		if(a[mid]==n)
		{
			return 1+bin_s(a,n,l,mid-1)+bin_s(a,n,mid+1,h);
		}
		else if(n>a[mid])
		{
			l=mid+1;
		}
		else
		{
			h=mid-1;
		}
	}
	return 0;
}

int main()
{
	vector<int> v;
	cout<<"enter array size:"<<endl;
	int n;cin>>n;
	cout<<"enter array:"<<endl;
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<"enter number to be found: "<<endl;
	int b;cin>>b;
	int res=bin_s(v,b,0,v.size()-1);
	cout<<res;



	return 0;
}
