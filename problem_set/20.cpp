#include <iostream>
using namespace std;
int main()
{
	int upp;
	cout<<"Please input the upper limit:";
	cin>>upp;
	cout<<"The non-prime number are:"<<endl;
	for (int i=2;i<=upp;i++)
	{
		for (int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				cout<<i<<" ";
				break;

			}
		}
	}
	cout<<endl;
	return 0;
}