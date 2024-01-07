#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1) //base case
    return 1;
    return n*fact(n-1); //recusive call
}
int main()
{
    int num;
    cin>>num;
   // cout<<"sum is \n"<<sum(num);
    cout<<"factorial is "<<fact(num)<<endl;
}