#include<iostream>
using namespace std;
int pow(int a, int b)
{
    int ans=1;
    
    for(int i=0;i<b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{ 
    int a,b;
    cout<<"enter number \n";
    cin>>a;
    cout<<"enter exponent\n";
    cin>>b;
    int x=pow(a,b);
 cout<<"answer is "<<x;
}
