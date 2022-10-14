#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    //입력
    int a,b,c;
    cin>>a>>b>>c;
    
    //세 숫자 다 같음
    if(a==b && b==c) cout<<10000+a*1000;
    
    //두 숫자만 같음
    else if((a==b&&b!=c)||(a==c&&b!=c)) cout<<1000+a*100;
    else if((c==b&&a!=c)) cout<<1000+b*100;
    
    //숫자 다 다름
    else cout<<max({a,b,c})*100;

    return 0;
}