#include<iostream>
using namespace std;
int main()
{
    int i=5;
    int *ptr=&i;
    cout<<"address is : "<<ptr<<endl;
    cout<<"the value is : "<<*ptr<<"\n";
    ptr=ptr+1;
    cout<<ptr;
}