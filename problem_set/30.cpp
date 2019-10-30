#include <iostream>
using namespace std;
int main()
{
	int end;
	double num,sum=0;
	cout<<"Input the last integer between 1 to 98 "
		<<"you want to add:"
		<<endl;
	cin>>end;
	for (int i=1;i<=end;i++)
	{
		if(i<9)
			num=i+(i+1)*0.1;
		else
			num=i+(i+1)*0.01;
		cout<<"+"<<num;
		sum+=num;
	}
	cout<<"\nThe sum of the series ="<<sum<<endl;
	return 0;
}