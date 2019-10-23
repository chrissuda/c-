#include <iostream>
using namespace std;
int main()
{
	int a=2147483647;
	int b=-2147483648;
	cout <<"overflow the integer range:"<<a+1<<endl;
	cout <<"Increase from its minimum range:"<<a+2<<endl;
	cout <<"Product is:"<<a*a<<endl;
	cout <<"underflow the range:"<<b-1<<endl;
	cout <<"Decrease from its maximum range:"<<b-2<<endl;
	cout<< "Product is :"<<b*b<<endl;
	return 0;
}