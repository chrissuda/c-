#include <iostream>
using namespace std;
int main()
{
	cout<<"Numbers between 100 and 200. divisible by 9:\n";
	int i=100,sum=0;
	while (i<i+9)
	{
		if(i%9==0)
			break;
		else
			i++;
	}
	while (i<=200)
	{

		cout<<i<<" ";
		sum+=i;
		i+=9;
	}
	cout<<"\nThe sum is: "<<sum<<endl;
	return 0;
}