#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    a=2;
    b=3;

    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;

    c=a;
    a=b;
    b=c;

    cout<<"after swapping "<<endl;
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;
    return 0;
}
