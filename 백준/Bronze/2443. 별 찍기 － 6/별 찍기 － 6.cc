#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    
    for(int i=0; i<N; i++){
        
        //공백 출력
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        
        //별 출력
        for(int m=2*(N-i)-1; m>=1; m--){
            cout<<"*";
        }
        
        cout<<"\n";
    }
    return 0;
}