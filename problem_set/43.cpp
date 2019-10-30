#include <iostream>
using namespace std;
int main()
{
	int orig[]={1,5,7,5,8,9,11,11,2,5,6};
	int len=sizeof(orig)/sizeof(orig[0]);
	cout<<"Original array:";
	for (int i=0;i<len;i++)
		cout<<" "<<orig[i];
	cout<<"\nCommon elements of the said array:"
		<<orig[0];

	for (int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(orig[j]!=orig[i])
			;
			else
				orig[j]=orig[0];
		}
		if(orig[i]!=orig[0])
			cout<<" "<<orig[i];
	}
	cout<<endl;
	return 0;
	
}