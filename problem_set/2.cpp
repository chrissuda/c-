#include <iostream>
using namespace std;
int main()
{
    char a='a';
    cout <<"The size of char is:";
    cout << sizeof(a)<<"bytes"<<endl;

    short b=1;
    cout <<"The size of short is:";
    cout << sizeof(b)<<"bytes"<<endl;

    int c=1;
    cout <<"The size of int is:";
    cout << sizeof(c)<<"bytes"<<endl;

    long d=1;
    cout <<"The size of long is:";
    cout << sizeof(d)<<"bytes"<<endl;

    long long e=1;
    cout <<"The size of long long is:";
    cout << sizeof(e)<<"bytes"<<endl;

    float f=1;
    cout <<"The size of float is:";
    cout << sizeof(f)<<"bytes"<<endl;

    double g=1;
    cout <<"The size of double is:";
    cout << sizeof(g)<<"bytes"<<endl;

    long double h=1;
    cout <<"The size of long double is:";
    cout << sizeof(h)<<"bytes"<<endl;

    bool i=true;
    cout <<"The size of bool is:";
    cout << sizeof(i)<<"bytes"<<endl;
    return 0;
}