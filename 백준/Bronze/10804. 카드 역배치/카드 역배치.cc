#include <iostream>

using namespace std;

int arr[21];

//역순으로 뒤집기
void reverse(int a,int b){
    for(int i=0; i<(b-a+1)/2; i++){
        swap(arr[a+i],arr[b-i]);
    }
}

int main()
{
    int count=10,a,b;
    
    //초기 배열
    for(int i=1;i<=20;i++){
        arr[i]=i;
    }
    
    //10번 숫자 받고 역순으로 뒤집기
    while(count--){
        cin>>a>>b;
        reverse(a,b);
    }
    
    //출력
    for(int i=1;i<=20;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}