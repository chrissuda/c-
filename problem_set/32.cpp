#include <iostream>
using namespace std;
int main()
{
	int decimal,remainder,quotient=0,i=-1;
	int binary[100];
	cout<<"Input a decimal point:";
	cin>>decimal;
	quotient=decimal;
	while(quotient!=0)
	{
		i++;
		remainder=quotient%2;
		binary[i]=remainder;
		quotient=quotient/2;
	
	}
	
	cout<<"The binary number is: ";
	for (;i>=0;i--){
		cout<<binary[i];	
	}

	cout<<endl;
	return 0;
}
