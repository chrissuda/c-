#include <iostream>
using namespace std;
int main()
{
	int number,remainder;
	cout <<"Please input a nmber greater than 2:"<<endl;
	cin>>number;
	for(int i=2;i<number;i++)
	{

		remainder=number%i;
		if(remainder==0)
		{
			cout<<"It isn't a prime number"<<endl;
			return 0;
		}
		else
		;

	}
	cout<<"It is a prime"<<endl;
	return 0;
}