#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    int sum=a+b, sub=a-b,mul=a*b, share=a/b,remain=a%b;
    cout<<sum<<"\n"<<sub<<"\n"<<mul<<"\n"<<share<<"\n"<<remain<<"\n";
    
    return 0;
}