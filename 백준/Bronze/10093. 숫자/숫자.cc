#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long a,b,A,B;

    //입력
    cin>>A>>B;
    
    if(A<B){
        a=A;
        b=B;
    }
    else {
        a=B;
        b=A;
    }
    
    //출력
    if(a==b||b-a==1) cout<<0;
    else{
        cout<<b-a-1<<"\n";
        for(long long i=a+1;i<b;i++){
            cout<<i<<" ";
        }
    }

    return 0;
}