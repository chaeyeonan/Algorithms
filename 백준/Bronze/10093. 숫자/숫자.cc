#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long a,b;

    //입력
    cin>>a>>b;
    
    if(a>b){
        swap(a,b);
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