#include <iostream>
#include<vector>
using namespace std;

int bs(const int  a[], int x)
{
	int low=0,high =4;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]>x)
			high=mid-1;
		else if(a[mid]<x)
			low=mid+1;
		else
			return mid;

	}
	return -1;
}

int main()
{
	int n=5;
	int arr[5];
	for(int i=0;i<5;++i)
		cin>>arr[i];
	for(int i=0;i<5;++i)
		cout<<arr[i]<<" "<<endl;
	cout<<bs(arr,3);



	return 0;
}