#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	char binary[100];
	cout<<"Input a binary number:";
	cin>>binary;
	int len=strlen(binary);
	int sum;
	for (int i=0;i<len;i++){
		sum+=((int)binary[i]-48)*pow(2,len-i-1);	
	}
		
	cout<<"The decimal number is:"<<sum<<endl;
	return 0;
}