#include <iostream>
using namespace std;
int main()
{
	int orig[]={0,1,3,4,5,6,7,8,10};
	int size=sizeof(orig)/sizeof(orig[0]);
	cout<<"Original array: ";
	for (int i=0;i<size;i++)
		cout<<orig[i]<<" ";

	cout<<endl;

	int *ps=new int[size];
	ps[0]=orig[0]*orig[1];
	cout<<"New array elements: "<<ps[0]<<" ";
	for (int i=1;i<size;i++){
		ps[i]=orig[i-1]*orig[i+1];
		cout<<ps[i]<<" ";
	}
	cout<<orig[size-1]*orig[size-2]
		<<endl;

	delete []ps;
	return 0;
}