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
	cout<<s2<<endl<<s3;



	return 0;
}
