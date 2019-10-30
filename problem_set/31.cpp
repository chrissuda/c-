#include <iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"Input number of rows:";
	cin>>rows;
	for (int i=0;i<rows;i++){
		for (int j=i,n=0;n<8;j--){
			if(j<0)
				cout<<-j<<" ";
			else
				cout<<j<<" ";
		
			n++;
		}
		cout<<endl;
	}
	return 0;
}