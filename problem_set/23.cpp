#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,i=0,j,sum,a=0;
	cout<<"Input the number of n terms: ";
	cin>>num;
	while (i<num)
	{
		cout<<"+";
		j=1;
		a+=pow(10,i);
		cout<<a;
		sum+=a;
		i++;
	}
	cout<<"\nThe sum of the series is: "
		<<sum
		<<endl;
	return 0;
}