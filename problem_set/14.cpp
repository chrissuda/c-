#include <iostream>
using namespace std;
int prime(int number);
int main()
{
	cout<<"Input a number(>4) to find the last prime number occurs before the number:";
	int numbers,number;
	cin>>numbers;
	for(number=numbers-1;number>0;number--)
	{
		if(prime(number))
		{
			cout<<number<<" is a prime number\n";
			return 0;
		}
		else
		;
	}
	return 0;
}

int prime(int number)
{
	int remainder;
	for(int i=2;i<number;i++)
	{
		remainder=number%i;
		if(remainder==0)
		{
			//cout<<"It isn't a prime number"<<endl;
			return 0;
		}
		else
		;

	}
	return number;
}