#include <iostream>
using namespace std;
int main()
{
	int start,end;
	cout<<"Input the starting value for ASCll characters:";
	cin>>start;
	cout<<"Input the ending value for ASCll characters:";
	cin>>end;
	cout<<"The ASCll characters:\n";
	for (int i=start;i<=end;i++)
	{
		cout<<i<<"->"<<(char)i<<endl;
	}
	return 0;
}