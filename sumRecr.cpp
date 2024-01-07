/*#include<iostream>
using namespace std;
int sum(int n)
{
    if(n<=1)
    return 1;
    else
    return n+sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"the sum is : \n";
    cout<<sum(n);
}*/
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int sum(int x)
{
    if(x==0)
    return 0;
    return x+sum(x-1);
}
int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}