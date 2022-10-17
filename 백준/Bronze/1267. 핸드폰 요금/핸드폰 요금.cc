#include <iostream>

using namespace std;

int main()
{
    int N,arr[21],Y=0,M=0;
    N<=20;
    cin>>N;
    
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N;i++){
        Y+=(arr[i]/30)*10+10;
        M+=(arr[i]/60)*15+15;
    }
    
    if(Y<M) cout<<"Y "<<Y;
    else if(Y>M) cout<<"M "<<M;
    else cout<<"Y M "<<Y;
    
    return 0;
}