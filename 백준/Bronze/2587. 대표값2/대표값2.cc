#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    //입력
    int arr[5],sum=0,avg;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    
    //평균
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    avg=sum/5;
    
    //정렬
    sort(arr,arr+5);
    
    cout<<avg<<"\n"<<arr[2]; //중앙값=arr[2]

    return 0;
}