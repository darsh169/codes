#include<bits\stdc++.h>
using namespace std;

bool rev(int a,int b)
{
	return (a>b);
}

int main()
{
	vector<int>v;
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end(),rev);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}



	return 0;

}
