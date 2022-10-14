#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    //입력
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    
    //정렬
    sort(arr,arr+3);
    
    //출력
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}