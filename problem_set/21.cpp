#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Input the number up to:";
	cin>> num;
	cout<<"Multiplication table from 1 to "
		<<num
		<<endl;
	for (int i=1;i<=10;i++)
	{
		for(int j=1;j<=num;j++)
		{
			cout<<j<<"*"<<i<<"="<<j*i<<" ";
		}
		cout<<endl;
	}
	return 0;
}