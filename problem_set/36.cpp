#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
	char strs[100],str;
	int alpha=0,digit=0,space=0;
	cout<<"Enter a string:";
	cin.getline(strs,100);
	int len=strlen(strs);
	cout<<"The number of characters in the string is:"
		<<len<<endl;

	for (int i=0;i<len;i++){
		str=strs[i];
		if(isalpha(str))
			alpha+=1;
		else if(isdigit(str))
			digit+=1;
		else if(isspace(str))
			space+=1;
		else
		;
	}	
	cout<<"The number of alphabets in the string is:"
		<<alpha<<endl;
	cout<<"The number of digits in the string is:"
		<<digit<<endl;
	cout<<"The number of spaces  in the string is:"
		<<space<<endl;
	cout<<"The number of other characters are:"
		<<len-alpha-digit-space<<endl;
	return 0;


	
}