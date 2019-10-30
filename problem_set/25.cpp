#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
	char ch[10],a;
	int i=0;
	cout<<"Input a number:"<<endl;
	cin>> ch;
	int num=strlen(ch);
	cout<<"The reverse is: ";
	for (;i<num/2+1;i++)
	{
		a=ch[i];
		ch[i]=ch[num-i];
		ch[num-i]=a;
		cout<<ch[i];
		if(i>=num/2)
		{

			while(i<num)
			{
				i++;
				cout<<ch[i];
				
			}
		}

	}
	cout<<endl;
	return 0;
}