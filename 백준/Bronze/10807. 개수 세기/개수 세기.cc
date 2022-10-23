#include <iostream>

using namespace std;

int arr[100],pos[100],neg[100];

int main()
{
    int n,x;
    
    //입력
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>x;
    
    // 입력하는 숫자가 양수, 음수에 따라 다른 배열에 저장
    for (int i=0; i<n; i++){
        if(arr[i]>=0){
            pos[arr[i]]++;
        }
        else if(arr[i]<0){
            neg[-arr[i]]++;
        }
    }
    
    // 찾는 숫자가 양수, 음수에 따라 다른 배열에서 개수 찾음
    if(x>=0) cout<<pos[x];
    else if(x<0) cout<<neg[-x];
    
    return 0;
}