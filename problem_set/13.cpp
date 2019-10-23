#include<iostream>
using namespace std;
int prime(int number);
int main()
{
	int min,max,number;
	cout<<"please enter the min first and then space and input max"
		<<" and I will find the prime number between them";
	cin>>min>>max;
	for(number=min;number<=max;number++)
	{
		if(prime(number))
			cout<<number<<" ";
		
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