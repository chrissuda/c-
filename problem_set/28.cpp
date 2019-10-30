#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	char num[20];
	int sum;
	cout<<"Input any number :";
	cin>>num;
	int len=strlen(num);
	 for (int i=0;i<=9;i++){
		sum=0;
		cout<<"The frequency of "
 		<<i
	 		<<"=";
	 	for (int j=0;j<len;j++){
	 		if((int)num[j]==i+48)
	 			sum++;
	 	}

	 	cout<<sum<<endl;
	 	sum=0;
	}

	return 0;
}