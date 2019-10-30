#include <iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"Input number of rows:";
	cin>>rows;
	for (int i=1;i<=rows;i++)
	{
		for (int j=rows-1;j>=i;j--)
			cout<<" ";
		for (int n=1;n<=i;n++)
			cout<<n;
		for (int b=i-1;b>=1;b--)
			cout<<b;
		cout<<endl;
	}
}