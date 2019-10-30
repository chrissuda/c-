#include <iostream>
using namespace std;
int main()
{
	int num,sum,j=1;
	cout<<"Input number of terms:";
	cin>>num;
	cout<<"The odd number are: ";
	for (int i=1;i<num;i++)
	{
		cout<<j<<",";
		sum+=j;
		j+=2;
	}
	cout<<"\nThe sum is: "<<sum<<endl;
	return 0;
}