#include<bits/stdc++.h>
using namespace std;

class bank_acc
{
private:
double balance;
public:
	bank_acc(double opn_amt)
	{
		balance=opn_amt;
	}
	double display()
	{
		return balance;
	}
	void withdraw(double withdraw)
	{
		balance-=withdraw;
	}
};

int main()
{
	bank_acc acc1(500);
	//acc1(500);
	cout<<acc1.display();
	return 0;

}