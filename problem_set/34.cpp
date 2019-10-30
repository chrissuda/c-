#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	cout<<"Enter a string:";
	char str[100];
	cin>>str;
	int len=strlen(str);
	for (int i=0;i<len/2;i++)
	{
		char a=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=a;
	}
	cout<<"\nthe string reverse are:";
	for (int i=0;i<len;i++)
		cout<<str[i];
	cout<<endl;
	return 0;
}