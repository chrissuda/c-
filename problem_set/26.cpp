#include <iostream>
#include <string>
using namespace std;
int primes(int number);
int main()
{
	int num;
	cout<<"Input a positive integer:";
	cin>>num;
	for (int i=2;i<=num/2+1;i++)
	{

		if((primes(i)!=0)&&(primes(num-i)!=0))
			cout<<num<<"="<<i<<"+"<<num-i<<endl;
			continue;
		else
		;
		if(i==num/2+1)
			cout<<"Sorry there is no prime number any more!"<<endl;

	}
}
int primes(int number)
{
	int prime,remainder;
	for(int i=2;i<number;i++)
	{

		remainder=number%i;
		prime=0;
		if(remainder==0)
		{
			return prime;
		}
		else
		;

	}
	prime=number;
	return prime;

}