#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    
    int arr[9],sum=0,sub=0,a,b;
    
    for(int i=0; i<9; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<9; i++) {
        sum+=arr[i];
    }
    
    sub=sum-100;
    for(int i=0; i<9; i++){
        for(int j=i+1; j<9; j++){
            if(arr[i]+arr[j]==sub){
                a=arr[i];
                b=arr[j];
            }
        }
    }
     
    
    for(int i=0; i<9; i++){
        sort(arr,arr+9);
        if(arr[i]!=a && arr[i]!=b) {
            cout<<arr[i]<<"\n";
        }
    }

    return 0;
}