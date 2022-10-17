#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[9],max,index;
    
    for (int i=0; i<9; i++){
        cin>>arr[i];
    }
    
    max=*max_element(arr,arr+9);
    
    for(int i=0; i<9; i++){
        if(arr[i]==max) index=i+1;
    }
    
    cout<<max<<"\n"<<index;
    
    return 0;
}