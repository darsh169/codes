 #include<bits/stdc++.h>
using namespace std;
//search,delete and insert element in array

int main()
{
	int array[50],sk1,sk2,i,j,k,temp;
	array[0]=10;
	array[1]=20;
	array[2]=30;
	array[3]=40;
	array[4]=50;
	array[5]=60;
	int n=6;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<array[i]<<endl;
	}
	cout<<n<<endl;
	sk1=50;
	for( i=0;i<n;++i)
	{
		if(array[i]==sk1)
			break;
	}
	if(i==n)
		cout<<"key not found till end"<<endl;//i becomes n when loop ends and sk1 isnt found
	else
		cout<<"found"<<endl;

	cin>>sk2;	
	cout<<"deleting"<<endl;

	for( j=0;j<n;j++)
	{
		if(array[j]==sk2)
			break;
	}
	for(int k=j;k<n;k++)
	{
		array[k]=array[k+1];
	}
	n--;

	for (int i = 0; i < n; ++i)
	{
		cout<<array[i]<<endl;
	}
	cout<<n<<endl;

	cout<<"insert an element"<<endl;
	int sk3;
	cin>>sk3;
	cout<<"give index"<<endl;
	int index;
	cin>>index;

	for(int c=n-1;c>index-1;c--)
	{
		array[c+1]=array[c];
	}
	array[index]=sk3;
	n++;
	
	for (int i = 0; i < n; ++i)
	{
		cout<<array[i]<<endl;
	}
	return 0;
}