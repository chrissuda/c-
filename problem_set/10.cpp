#include <iostream>
using namespace std;

int main()
{
    cout<<"Input a character:";
    char code;
    
    cin>> code;
    int number =code;
    cout<<"The ASCll value of "
    	<<code
    	<<" is: "
    	<<number<<endl;
    cout.put(code);
    cout<<"\n";
    return 0;
}
