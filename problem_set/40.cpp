#include <iostream>
using namespace std;
int main()
{
	int orig[]={0,1,3,4,5,6,7,8,10};
	int len=sizeof(orig)/sizeof(orig[0]);
	cout<<"Original array:";
	int *ps=new int[len];
	for (int i=0,j=0,n=len-1;i<len;i++){
		cout<<" "<<orig[i];
		if(orig[i]%2==0){
			ps[j]=orig[i];
			j++;
		}
		else
		{
			ps[n]=orig[i];
			n--;
		}	
	}
	cout<<"\nArray after dvided:";
	for (int i=0;i<len;i++)
		cout<<" "<<ps[i];
	cout<<endl;
	delete []ps;
	return 0;

}