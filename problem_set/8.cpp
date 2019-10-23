#include <iostream>
using namespace std;

int main()
{
	for (int i=1;i<5;i++)
	{
		cout<<'\n';
		for (int i=1;i<7;++i)
			cout<<"* ";
		cout <<"";
		for (int i=1;i<35;i++)
			cout <<"=";
		cout<<'\n';
		for (int i=1;i<6;i++)
			cout <<" *";
		cout <<"  ";
		for (int i=1;i<35;i++)
			cout <<"=";
	}

	cout<<'\n';
	for (int i=1;i<7;i++)
		cout <<"* ";

	cout <<"";
	for (int i=1;i<35;i++)
		cout<<"=";

	for (int i=1;i<7;i++)
	{
		cout<<'\n';
		for (int i=1;i<47;i++)
			cout<<"=";
	}

	return 0;
}