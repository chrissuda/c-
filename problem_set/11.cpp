#include <iostream>
using namespace std;
int main()
{
	cout<<"The natural numbers are:";
	int numbers[10];
	for(int i=0;i<10;i++)
	{
		numbers[i]=i+1;
		cout <<numbers[i];
		cout <<" ";

	}
	for (int i=0;i<10;i++)
		numbers[i+1]=numbers[i]+numbers[i+1];
	cout<<"\nThe total number of the first 10 natural number is:"
		<<numbers[9]<<endl;
	return 0;
}
