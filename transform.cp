#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,s2,s3;
	s="darshan GANGUrde";
	for(int i=0;i<s.length();i++)
	{
		s2.push_back(tolower(s[i]));
		s3.push_back(toupper(s[i]));
	}
	cout<<s2<<endl<<s3<<endl;
	//transform(Iterator inputBegin, Iterator inputEnd,Iterator OutputBegin, unary_operation)
	//transform(Iterator inputBegin1, Iterator inputEnd1,Iterator inputBegin2, Iterator OutputBegin,binary_operation)
	transform(s.begin(),s.end(),s.begin(),::tolower);
	
	vector<int> a(2,4);
	vector<int>b(3,6);
	transform(a.begin(),a.end(),b.begin(),a.begin(),plus<int>());
	for(int i=0;i<2;i++)
		cout<<a[i]<<" ";



	return 0;
}
