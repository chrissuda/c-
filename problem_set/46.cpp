#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	cout<<"Check whether a given number is palindrome or not:"<<endl;
	char num[100];
	cout<<"Input a number:";
	cin.getline(num,100);
	int len=strlen(num);
	for (int i=0;i<len;i++){
		if(num[i]==num[len-1-i])
		;
		else{
			cout<<"It is not a palindrome number"<<endl;
			return 0;			
		}
	}
	cout<<"It is a palindrome number!"<<endl;
	return 0;
}