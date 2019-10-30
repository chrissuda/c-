#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout<<"Please input integer, use -1 for termination"<<endl;
	int num[100],i=0,len,sum=0;
	cin>>num[i];
	while (num[i]!=-1){
		if(num[i]<num[0])
			num[0]==num[i];
		else if(num[i]>num[1])
			num[1]=num[i];
		else
		;
		i++;
		cin>>num[i];
	}
	len=i;
	cout<<"Your input is for termination. Here is the result"<<endl;
	for (i=0;i<len;i++){
		sum+=num[i];		
	}
	cout<<"The maximum value is:"<<num[1]<<endl;
	cout<<"The minumum value is:"<<num[0]<<endl;
	cout<<"The average is:"<<fixed<<showpoint<<setprecision(2)<<static_cast<double>(sum)/len<<endl;
	return 0;
}