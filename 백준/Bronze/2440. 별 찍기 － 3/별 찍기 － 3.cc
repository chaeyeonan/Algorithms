#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    
    for(int i=0; i<N; i++){
        
        for(int m=N-i; m>0; m--){
            cout<<"*";
        }
        
        cout<<"\n";
    }
    return 0;
}