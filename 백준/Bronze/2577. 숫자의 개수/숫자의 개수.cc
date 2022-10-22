#include <iostream>

using namespace std;

int arr[10];

int main()
{
    int A,B,C,total=0;
    
    cin>>A>>B>>C;
    total=A*B*C;
    
    while(total>0) {
        arr[total%10]++;
        total/=10;
    }
    
    for( int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}