#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int nth;
	double sum;
	cout<<"Please input nth term:"<<endl;
	cin>>nth;
	for (int i=1;i<=nth;i++)
	{
		sum+=1/pow(i,i);
		cout<<"+1/"<<i<<'^'<<i;
	}	
	cout<<"\nThe sum of the above series is:"
		<<sum<<endl;
	return 0;
}