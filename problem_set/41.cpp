#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int orig[]={0,1,0,0,1,1,1,0,1,0};
	int len=sizeof(orig)/sizeof(orig[0]);
	int *ps=new int [len];
	cout<<left<<setw(21)<<"Original array:";
	for (int i=0,zero=0,one=len-1;i<len;i++)
	{
		cout<<" "<<orig[i];
		if(orig[i]==0){
			ps[zero]=0;
			zero++;

		}
		else{
			ps[one]=1;
			one--;
		}
	}
	cout<<left<<setw(21)<<"\nAarray after divided:";
	for (int i=0;i<len;i++)
		cout<<" "<<ps[i];
	cout<<endl;
	return 0;
	

}	