#include <iostream>
using namespace std;
int main()
{
	int num1,num2,re;
	cout<<"Input the first greater number:";
	cin>>num1;
	cout<<"Input the second smaller number:";
	cin>>num2;
	re=num1%num2;
	while(re!=0)
	{
		num1=num2;
		num2=re;
		if (num1<num2)
		{
			num2=num1;
			num1=re;
		}
		else
			re=num1%num2;
	}
	cout<<num2<<" is the greast the common divisor";
	return 0;
}
