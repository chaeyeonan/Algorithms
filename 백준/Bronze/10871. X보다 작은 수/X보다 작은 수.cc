#include <iostream>

using namespace std;

int main()
{
    int N,X;
    cin>>N>>X;
    
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<N;i++){
        if(X>a[i]){
            cout<<a[i]<<' ';
        }
    }

    return 0;
}