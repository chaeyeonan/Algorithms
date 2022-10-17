#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    
    //위
    for(int i=1; i<=N; i++){
        
        //왼쪽 별
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        
        //공백
        for(int m=N-i; m>0; m--){
            cout<<"  ";
        }
        
        //오른쪽 별
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        
        cout<<"\n";
    }
    
    //아래
    for(int i=1; i<=N; i++){
        
        for(int j=N-i; j>0; j--){
            cout<<"*";
        }
        
        for(int m=1; m<=i; m++){
            cout<<"  ";
        }
        
        for(int j=N-i; j>0; j--){
            cout<<"*";
        }
        
        cout<<"\n";
    }
    
    return 0;
}