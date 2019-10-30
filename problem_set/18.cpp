#include <iostream>
using namespace std;
int main()
{
	int total,sum,n;
	cout<<"Please input the value for nth term: ";
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			sum+=j;
			cout<<"+"<<j;
		}
		cout<<"="<<sum<<endl;
		total+=sum;
	}
	cout<<"The sum of the above series is: "
		<<total
		<<endl;

	return 0;
}