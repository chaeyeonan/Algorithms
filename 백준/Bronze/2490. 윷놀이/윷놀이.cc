#include <iostream>

using namespace std;

int main()
{
    
    int a[3][4],count=0;
    string result;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(a[i][j]==1){
                count++;
            }
        }
        
        if(count==4) result="E"; //모
        else if(count==3) result="A"; //도
        else if(count==2) result="B"; //개
        else if(count==1) result="C"; //걸
        else result="D"; //윷
    
        cout<<result<<"\n";
        count=0;
    }
    
    return 0;
}